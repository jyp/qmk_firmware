/* Copyright 2019 Jean-Philippe Bernardy
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
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { QMKBEST = SAFE_RANGE, QMKURL };

#define _QW_LAYER 0
#define _FN_LAYER 1

#define ____ KC_TRNS /* transparent */
#define MOFUN MO(_FN_LAYER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW_LAYER] = LAYOUT
(/* Base */
 KC_EQUAL, KC_1, KC_2, KC_3,   KC_4,   KC_5,                                   KC_6,   KC_7, KC_8,   KC_9,   KC_0,   KC_MINUS, \
 KC_TAB,   KC_Q, KC_W, KC_E,   KC_R,   KC_T,                                   KC_Y,   KC_U, KC_I,   KC_O,   KC_P,   KC_BSLASH, \
 KC_LCTRL, KC_A, KC_S, KC_D,   KC_F,   KC_G,                                   KC_H,   KC_J, KC_K,   KC_L,   KC_SCLN,KC_QUOTE, \
 KC_LSHIFT,KC_Z, KC_X, KC_C,   KC_V,   KC_B, KC_LCTL,KC_LALT,  KC_RALT,KC_RCTL,KC_N,   KC_M, KC_COMM,KC_DOT, KC_SLSH,KC_RSHIFT, \
 /**/    KC_GRV, KC_LBRC,KC_RBRC,KC_SPC,KC_ESC,MOFUN,    KC_LGUI,KC_ENT, KC_BSPC,KC_LEFT,KC_UP,KC_RGHT, \
 /**/                  KC_NO ,                                                                KC_DOWN),
    [_FN_LAYER] = LAYOUT
(/* Function keys */
 ____, KC_F1,  KC_F2,  KC_F3, KC_F4,KC_F5,                       KC_F6, KC_F7,KC_F8, KC_F9,KC_F10,KC_F11, \
 ____, KC_MUTE,KC_VOLD,KC_VOLU,____,KC_BRID,                   KC_BRIU,BL_INC,BL_DEC, ____,  ____,KC_F12, \
 ____, KC_MPLY,KC_MPRV,KC_MNXT,  ____,____,                         ____,  ____, ____,  ____,  ____,  ____, \
 ____, ____,   ____,    ____,  ____,____,  ____,____,   ____,____,____,  ____, ____,  ____,  ____,  ____, \
 /**/  RESET, ____,____, ____, ____,____,  ____,____, KC_DEL,KC_HOME,KC_PGUP, KC_END, \
 /**/           ____,                                                    KC_PGDN)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /* switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
            } else {
                // when keycode QMKURL is released
            }
            break;
    } */
    return true;
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

void led_set_user(uint8_t usb_led) {}
