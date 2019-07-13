#include "SplashScreenState.h"
#include "../utils/Arduboy2Ext.h"
#include "../images/Images.h"


// ----------------------------------------------------------------------------
//  Initialise state ..
//
void SplashScreenState::activate(StateMachine & machine) {

    auto & sound = machine.getContext().sound;
	auto & arduboy = machine.getContext().arduboy;

  sound.setOutputEnabled(arduboy.audio.enabled);
  sound.volumeMode(VOLUME_ALWAYS_NORMAL);

}


// ----------------------------------------------------------------------------
//  Handle state updates ..
//
void SplashScreenState::update(StateMachine & machine) {

    auto & sound = machine.getContext().sound;
	auto & arduboy = machine.getContext().arduboy;
	auto justPressed = arduboy.justPressedButtons();

  if (justPressed > 0 && this->counter == 0) {

    this->counter = 1;
    sound.tone(NOTE_B2, 0);

  }

  if (this->counter > 0) {

    this->counter++;

    if      (this->counter == 13)  { // 256 Hz
      OCR3A = 3905;
    }
    else if (this->counter == 26)  { // 512 Hz
      OCR3A = 1952;
    }
    else if (this->counter == 39)  { // 1000 Hz
      OCR3A = 999;
    }
    else if (this->counter == 55)  { // 2000 Hz
      OCR3A = 499;
    }
    else if (this->counter == 71)  { // 4000 Hz
      OCR3A = 249;
    }
    else if (this->counter == 87)  { // 8820 Hz
      OCR3A = 112;
    }
    else if (this->counter == 103) { // 11025 Hz
      OCR3A = 90;
    }
    else if (this->counter == 125) {
      sound.noTone();
      machine.changeState(GameStateType::TitleScreen);
    }
  }

}


// ----------------------------------------------------------------------------
//  Render the state ..
//
void SplashScreenState::render(StateMachine & machine) {

	auto & arduboy = machine.getContext().arduboy;

  Sprites::drawOverwrite(47, 17, Images::Ppot_Buttons, 0);
  Sprites::drawOverwrite(43, 26, Images::Ppot_ButtonUp, 0);
  Sprites::drawOverwrite(73, 26, Images::Ppot_ButtonUp, 0);

  if (this->counter == 0) {

    Sprites::drawOverwrite(58, 26, Images::Ppot_ButtonUp, 0);
    Sprites::drawOverwrite(26, 46, Images::Ppot_Caption, 0);

  }
  else {

    Sprites::drawOverwrite(58, 26, Images::Ppot_ButtonDown, 0);
    Sprites::drawOverwrite(44, 46, Images::Ppot_Loading, 0);

    uint8_t i = (this->counter / 15) % 4;

    for (uint8_t j = 0; j < i; j++) {

        arduboy.drawPixel(79 + (j * 2), 49, WHITE);

    }

  }

}
