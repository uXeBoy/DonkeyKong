#pragma once

#include <Arduboy2.h>
#include "../Utils/Enums.h"
#include "../map/Coordinates.h"

class Crane {

  public:

    Crane();
 
    // Properties ..

    CranePosition getPosition();
    uint8_t getCounter();

    void setPosition(CranePosition position);
    void setCounter(uint8_t counter);


    // Methods

    void turnOn();
    void turnOff();
    void update();
    uint8_t getImage();

  private:

    void swingHook();

  protected:

    CranePosition position = CranePosition::Declined;
    CraneState state = CraneState::Dormant;
    Movements hookDirection = Movements::Right;
    uint8_t hook = 2;
    uint8_t counter = 0;

};

