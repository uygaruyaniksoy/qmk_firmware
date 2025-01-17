/* Copyright 2020 Harry Herring
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x726F
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    Polarity Works
#define PRODUCT         CRBN

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B1, F7, F6 }
#define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, D7, E6, B4, B5, B6, B2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*Rotary Encoder Pins*/
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }

/*Sets the number of pulses per increment*/
#define ENCODER_RESOLUTION 2

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define MK_C_OFFSET_1 13
#define MK_3_SPEED

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT

//#define SPI_DRIVER          SPID1 //might change to SPID3 if necessary
//#define SPI_SCK_PIN         F0
//#define SPI_MISO_PIN        F1
//#define SPI_MOSI_PIN        C7
//#define AdafruitBleCSPin    B7
//#define AdafruitBleIRQPin   E6
//#define AdafruitBleResetPin D4


//#define SPI_SCK_PAL_MODE    5
//#define SPI_MISO_PAL_MODE   5
//#define SPI_MOSI_PAL_MODE   5
