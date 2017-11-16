/*
   bitmaps.h -
   WKRP_Turkeys bitmap definitions
   scruss 2017-11
   generated by
     image2cpp https://javl.github.io/image2cpp/

   a very select few might recognize these bitmaps as the
   ‘imageturkey’ from the old PostScript language tutorials
*/

// AVR-specific code for storing data in program flash memory
#include <avr/pgmspace.h>

static const uint8_t PROGMEM turkeys1 [] = {
  // 'imageturkey2' - left facing
  0x00, 0x3b, 0x00, 0x00, 0x27, 0x00, 0x00, 0x24, 0x80, 0x0e, 0x49, 0x40, 0x11, 0x49, 0x20, 0x14,
  0xb2, 0x20, 0x3c, 0xb6, 0x50, 0x75, 0xfe, 0x88, 0x17, 0xff, 0x8c, 0x17, 0x5f, 0x14, 0x1c, 0x07,
  0xe2, 0x38, 0x03, 0xc4, 0x70, 0x31, 0x82, 0xf8, 0xed, 0xfc, 0xb2, 0xbb, 0xc2, 0xbb, 0x6f, 0x84,
  0x31, 0xbf, 0xc2, 0x18, 0xea, 0x3c, 0x0e, 0x3e, 0x00, 0x07, 0xfc, 0x00, 0x03, 0xf8, 0x00, 0x1e,
  0x18, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t PROGMEM turkeys2 [] = {
  // 'imageturkey2r' - right facing
  0x00, 0xdc, 0x00, 0x00, 0xe4, 0x00, 0x01, 0x24, 0x00, 0x02, 0x92, 0x70, 0x04, 0x92, 0x88, 0x04,
  0x4d, 0x28, 0x0a, 0x6d, 0x3c, 0x11, 0x7f, 0xae, 0x31, 0xff, 0xe8, 0x28, 0xfa, 0xe8, 0x47, 0xe0,
  0x38, 0x23, 0xc0, 0x1c, 0x41, 0x8c, 0x0e, 0x3f, 0xb7, 0x1f, 0x43, 0xdd, 0x4d, 0x21, 0xf6, 0xdd,
  0x43, 0xfd, 0x8c, 0x3c, 0x57, 0x18, 0x00, 0x7c, 0x70, 0x00, 0x3f, 0xe0, 0x00, 0x1f, 0xc0, 0x00,
  0x18, 0x78, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00
};

// image frame array for animation
const uint8_t* const img[] PROGMEM = {
  turkeys1, turkeys2
};
