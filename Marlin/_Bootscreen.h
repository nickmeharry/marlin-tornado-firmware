    #define CUSTOM_BOOTSCREEN_TIMEOUT      3000
    #define CUSTOM_BOOTSCREEN_BMPWIDTH      128
    #define CUSTOM_BOOTSCREEN_BMPHEIGHT      64

    const unsigned char custom_start_bmp[1024] PROGMEM = {
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000001,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000001,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00011111,B11111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B11111111,B11100000,B00000000,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000011,B11110000,B00000000,B00000000,B00000000,B00111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000111,B10000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00001110,B00000111,B11111100,B00000000,B00000000,B00000000,B00001111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00001100,B11111111,B00000000,B00000000,B00000000,B00000000,B00000001,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00001111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00001111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000111,B11000000,B00000000,B00000000,B00000000,B00000001,B11100000,B01110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000001,B11100000,B00000000,B00000000,B00000000,B00000000,B01111100,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B01111000,B00000000,B00000000,B00000000,B00000000,B01111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000001,B00001111,B11000000,B00000000,B00000000,B00000001,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000001,B00000001,B11111111,B10000000,B00000000,B00111111,B11100011,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000001,B10000000,B00000111,B11111111,B11111111,B11111100,B00001111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000001,B11000000,B00000000,B00000000,B00000000,B00000000,B00111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B11100000,B00000000,B00000000,B00000000,B00000001,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00111000,B00000000,B00000000,B00000000,B00101111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00011110,B00000000,B00000000,B00000000,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000011,B10000000,B00000000,B00001111,B11111110,B01111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B01000000,B00000000,B00111110,B00000000,B01110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000110,B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000011,B00000000,B00000000,B00000000,B00011111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000001,B11000000,B00000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B01111000,B00000000,B00001111,B11101100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000100,B00000000,B00010000,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00011110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B01111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00111111,B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00001000,B00000000,B00000000,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
      B00000000,B00000000,B00000111,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111110,B00000000,B00000000,
      B00000000,B00000000,B00000011,B10000000,B00001111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111100,B00000000,B00000000,
      B00000000,B00000000,B00000000,B11000000,B01111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B11000011,B00000000,B00000000,B00001000,B00000000,B00000011,B00000000,B00001111,B10000000,B01111100,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000111,B00000001,B11111101,B11111111,B11101111,B11100111,B10000011,B00111111,B10000110,B01111100,B00111111,B10000000,
      B00000000,B00000000,B00000000,B00000000,B00001110,B00000111,B11111111,B11111111,B11110111,B11101111,B10001111,B11111111,B00011111,B11111100,B01111111,B11000000,
      B00000000,B00000000,B00000000,B00000000,B00111100,B00011111,B11111111,B11111101,B11111011,B11111111,B11011111,B11111111,B00111111,B11111100,B11111111,B11100000,
      B00000000,B00000000,B00000000,B00000000,B01110110,B00011111,B11111110,B01111011,B11111011,B11111111,B11011111,B11111111,B01111111,B11111101,B11111111,B11100000,
      B00000000,B00000000,B00000000,B00000000,B00000110,B00011110,B00000110,B01111011,B11111011,B11111111,B11111111,B11111111,B01111111,B11111111,B11100000,B11100000,
      B00000000,B00000000,B00000000,B00000000,B00011100,B00011100,B00000110,B01111011,B11110011,B11110111,B10111000,B00011110,B01110000,B01111011,B10000000,B11100000,
      B00000000,B00000000,B00000000,B00000001,B11111000,B00011000,B00011110,B01111100,B00000011,B11100111,B10111110,B11111110,B01111111,B11111011,B10000001,B11000000,
      B00000000,B00000000,B00000000,B00000000,B11110000,B00011111,B11111110,B01111110,B00000001,B11100111,B10111111,B11111111,B11111111,B11111111,B11111111,B11000000,
      B00000000,B00000000,B00000000,B00000011,B11111000,B00001111,B11111100,B11111111,B10000111,B11100111,B10111111,B11111111,B11111111,B11111111,B11111111,B11000000,
      B00000000,B00000000,B00000000,B00000011,B11110000,B00000111,B11111001,B11111111,B10000111,B11100111,B10011111,B11111111,B10111111,B01111110,B11111111,B10000000,
      B00000000,B00000000,B00000000,B00000001,B11110000,B00000011,B11110001,B11100000,B00000000,B00100111,B11111111,B00010000,B00000000,B01000000,B00111111,B00000000,
      B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
      B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
    };