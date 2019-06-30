#pragma once

namespace Images {

  const uint8_t PROGMEM Girder[] = {
  11, 8,
  0x03, 0x05, 0x0b, 0x11, 0x23, 0x41, 0x23, 0x11, 0x0b, 0x05, 0x03, 
  };

  const unsigned char PROGMEM Girder_Small[] = {
  13, 8,
  0x03, 0x05, 0x0b, 0x11, 0x0b, 0x05, 0x03, 0x05, 0x0b, 0x11, 0x0b, 0x05, 0x03, 
  };

  const unsigned char PROGMEM Girder_OverHead[] = {
  12, 8,
  0x63, 0x3d, 0x7f, 0x21, 0x63, 0x3d, 0x7f, 0x21, 0x63, 0x3d, 0x7f, 0x21, 
  };

  const unsigned char PROGMEM Ladder[] = {
  11, 19,
  0x00, 0xfe, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xfe, 0x00, 
  0x00, 0xff, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0xff, 0x00, 
  0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 
  };

  const unsigned char PROGMEM Ladder_Mask[] = {
  0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x07, 0x07, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 
  };

  const unsigned char PROGMEM Plate[] = {
  25, 8,
  0x01, 0x01, 0x07, 0x05, 0x05, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x05, 0x05, 0x07, 0x04, 0x04, 
  };

}