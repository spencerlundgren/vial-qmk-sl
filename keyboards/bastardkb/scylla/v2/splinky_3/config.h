/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Handedness. */
#define MASTER_RIGHT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// #define RGB_DI_PIN GP0
// #define DRIVER_LED_TOTAL 29
#define TAPPING_TOGGLE 2
#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

#define TAPPING_TERM 200
// #define QUICK_TAP_TERM 0

#undef SPLIT_USB_DETECT
#define USB_VBUS_PIN GP19

// #define RGB_WHITE 0xFF, 0xFF, 0xFF
// #define RGB_RED 0xFF, 0x00, 0x00
// #define RGB_CORAL 0xFF, 0x7C, 0x4D
// #define RGB_ORANGE 0xFF, 0x80, 0x00
// #define RGB_GOLDENROD 0xD9, 0xA5, 0x21
// #define RGB_GOLD 0xFF, 0xD9, 0x00
// #define RGB_YELLOW 0xFF, 0xFF, 0x00
// #define RGB_CHARTREUSE 0x80, 0xFF, 0x00
// #define RGB_GREEN 0x00, 0xFF, 0x00
// #define RGB_SPRINGGREEN 0x00, 0xFF, 0x80
// #define RGB_TURQUOISE 0x47, 0x6E, 0x6A
// #define RGB_TEAL 0x00, 0x80, 0x80
// #define RGB_CYAN 0x00, 0xFF, 0xFF
// #define RGB_AZURE 0x99, 0xf5, 0xFF
// #define RGB_BLUE 0x00, 0x00, 0xFF
// #define RGB_PURPLE 0x7A, 0x00, 0xFF
// #define RGB_MAGENTA 0xFF, 0x00, 0xFF
// #define RGB_PINK 0xFF, 0x80, 0xBF
