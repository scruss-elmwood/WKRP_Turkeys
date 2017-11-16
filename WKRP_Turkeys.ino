/*

   WKRP-inspired falling turkeys for Thanksgiving
   scruss - 2017-11 - for Chicago Electronic Distribution
                        & Elmwood Electronics

         ***************************
          NO TURKEYS WERE HARMED IN
           THE MAKING OF THIS DEMO
         ***************************

*/

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library
#include "bitmaps.h"        // frame definitions, each 24x24
#define IMGSIZE 24

// Tasteful Thanksgiving Colour definitions
//  - format is RGB-565 16-bit rrrrrggggggbbbbb₂
#define BROWNISH 0x2061  //  #200c08
#define LEAVES   0x5920  //  #582400
#define GOLD     0x41a0  //  #403400
#define RED      0x4000  //  #400000
#define OLIVE    0x2160  //  #202c00
#define BLACK    0x0000  //  #000000

// array of visible colours, stepped through in loop
uint16_t colarray[] = { BROWNISH, LEAVES, GOLD, RED, OLIVE };
#define COLMOD 5 // array modulus for looping
int colsub = 0; // current colour array position

// configuration for 32x32 matrix with
// SINGLE HEADER input pinout
// talking to Nootropic Matrix Backpack v2
#define CLK 8
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3
// If your matrix has the DOUBLE HEADER input,
//  please use values from RGB matrix panel code examples
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

int i = 0; // alternating frame counter

void setup() {
  matrix.begin();           // initialise LED matrix
  matrix.fillScreen(BLACK); // clear the screen
}

void loop() {
  /*
      Draw alternating frames, with left and right facing turkeys

      Start drawing turkey off top of matrix, and let it scroll
      down past the end of the matrix

      X-position of left and right facing turkeys varies to make
      them fit the matrix
  */
  for (int v = -24; v < 33; v++) {
    // erase turkey by drawing it in black one row up from vertical pos
    matrix.drawBitmap(1 + ((i % 2) ? 0 : 6), v - 1,
                      (const uint8_t *)pgm_read_word(&img[i]),
                      IMGSIZE, IMGSIZE, BLACK);
    // draw turkey at vertical pos
    matrix.drawBitmap(1 + ((i % 2) ? 0 : 6), v,
                      (const uint8_t *)pgm_read_word(&img[i]),
                      IMGSIZE, IMGSIZE, colarray[colsub]);
  }
  // change colour too at end of each turkey drop
  colsub++;
  colsub %= COLMOD;
  // alternate between left and  right facing turkeys
  i++;
  i %= 2;
}
