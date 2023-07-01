#pragma once

#define VIAL_KEYBOARD_UID {0x40, 0x4E, 0xA1, 0x89, 0x23, 0x14, 0x82, 0x88}

// Unlock with top left key (row 0, column 0) and
// top right key (row 3, column 5):
#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

/* In your config.h define a new variable RGBLIGHT_TIMEOUT and give it a value in milliseconds */

#define RGBLIGHT_SLEEP  // allows us to use rgblight_suspend() and rgblight_wakeup() in keymap.c
#define RGBLIGHT_TIMEOUT 60000// 30 seconds
