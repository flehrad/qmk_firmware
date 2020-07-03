/* Copyright 2018 Don Chiou
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

//bool is_jogwheel_left_active = false;
//uint16_t jogwheel_left_timer = 0;

//bool is_jogwheel_right_active = false;
//uint16_t jogwheel_right_timer = 0;

//enum custom_keycodes {
//  JOGWHEEL_LEFT = SAFE_RANGE,
//  JOGWHEEL_RIGHT = SAFE_RANGE
//};

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  //switch (keycode) {
    //case JOGWHEEL_LEFT:
    //if (record->event.pressed) {
      //if (!is_jogwheel_left_active) {
        //is_jogwheel_left_active = true;
        //register_code(KC_DEL);
      //}
      //jogwheel_left_timer = timer_read();
      //register_code(KC_DEL);
    //} else {
      //unregister_code(KC_DEL);
    //}
    //break;
    //}
  //return true;
//}

//void matrix_scan_user(void) {
//  if (is_jogwheel_left_active) {
    //if (timer_elapsed(jogwheel_left_timer)>1000)
//      unregister_code(KC_A);
  //    is_jogwheel_left_active = false;
    //}
  //}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_default(\
    KC_1,  KC_2,  KC_NO,  KC_4,  KC_5,
    KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
    KC_F5,  KC_B,  KC_C,  KC_D,  KC_F8,
    KC_LALT,  KC_M,  KC_UP,  KC_I,  KC_LCTRL,
    KC_K,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_O
    ),

};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* ER1 */
    if (clockwise) {
      tap_code(KC_L);
    } else {
      tap_code(KC_R);
    }
   } else if (index == 1) { /* ER2 */
    if (clockwise) {
      tap_code(KC_L);
    } else {
      tap_code(KC_R);
    }
   } else if (index == 2) { /* ER3 */
    if (clockwise) {
      tap_code(KC_END);
    } else {
      tap_code(KC_DEL);
    }
   } else if (index == 3) { /* ER4 */
    if (clockwise) {
      tap_code(KC_L);
    } else {
      tap_code(KC_R);
    }
   } else if (index == 4) { /* ER5 */
    if (clockwise) {
      tap_code(KC_L);
    } else {
      tap_code(KC_R);
    }
   } else if (index == 5) { /* ER6 */
    if (clockwise) {
      tap_code(KC_L);
    } else {
      tap_code(KC_R);
    }
  }
}

void matrix_init_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
