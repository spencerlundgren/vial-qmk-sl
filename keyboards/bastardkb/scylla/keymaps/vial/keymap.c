/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

#include <stdint.h>
#include QMK_KEYBOARD_H

// const uint16_t PROGMEM escape_combo[] = {LALT_T(KC_D), LCTL_T(KC_F), COMBO_END};
// const uint16_t PROGMEM tab_combo[] = {RCTL_T(KC_J), LALT_T(KC_K), COMBO_END};
// combo_t key_combos[] = {
//     COMBO(escape_combo, KC_ESC),
//     COMBO(tab_combo, KC_TAB),
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_4x6_5(_______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, CW_TOGG,
                               //-------------------------------------------------//-----------------------------------------------------------//
                             _______, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             // KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                             KC_GRV, LSFT_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), LALT_T(KC_K), RGUI_T(KC_L), RSFT_T(KC_SCLN), KC_QUOT,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             LCTL(LSFT(KC_P)), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RGUI(KC_SPC),
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_BSPC, TT(1), KC_LSFT, KC_ENT, KC_SPC, TT(2), KC_ESC, KC_TAB, QK_REP, CW_TOGG),

    [1] = LAYOUT_split_4x6_5(KC_F1, KC_F2, KC_DLR, KC_PERC, KC_PSLS, KC_PAST, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             _______, KC_PAST, KC_7, KC_8, KC_9, KC_PPLS, _______, _______, KC_RGUI, _______, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_HASH, KC_0, KC_4, KC_5, KC_6, KC_PEQL, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_PERC, KC_PSLS, KC_1, KC_2, KC_3, KC_PMNS, _______, _______, KC_RALT, _______, _______, _______,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_BSPC, _______,  KC_LSFT, KC_ENT, KC_SPC, TT(2), _______, _______, KC_BSPC, KC_BSPC),

    [2] = LAYOUT_split_4x6_5(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             RGB_SPD, RGB_SPI, KC_LT, KC_PEQL, KC_GT, KC_CIRC, KC_DLR, KC_LBRC, KC_UNDS, KC_RBRC, RGB_VAI, RGB_VAD,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, KC_BSLS, KC_LPRN, KC_PMNS, KC_RPRN, KC_PPLS, KC_PERC, KC_LCBR, KC_SCLN, KC_RCBR, KC_EXLM, _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             RGB_RMOD, RGB_MOD, KC_PAST, KC_COLN, KC_SLSH, KC_AT, KC_HASH, KC_PIPE, KC_GRV, KC_AMPR, _______, QK_BOOT,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_BSPC, TT(1), KC_ENT, KC_ENT, KC_SPC, _______, KC_SPC, KC_SPC, _______, _______),
    [3] = LAYOUT_split_4x6_5(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                             // _______, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), _______, _______, OSM(MOD_RCTL), OSM(MOD_RALT), OSM(MOD_RGUI), OSM(MOD_RSFT), _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
};

// uint8_t Layer0_primary[36] = {6, 9, 14, 17, 21, 5, 10, 13, 18, 22, 4, 11, 12, 19, 23, 57, 56, 27, 50, 46, 43, 38, 35, 30, 51, 47, 42, 39, 34, 31, 52, 48, 41, 40, 33, 0};
// uint8_t Layer0_secondary[12] = {1, 2, 7, 8, 15, 16, 20, 49, 45, 44, 37, 36};
// uint8_t Layer0_mods[5] = {28, 25, 24, 53, 54};
// uint8_t Layer0_qmk[5] = {29, 55, 26, 32, 3};

uint8_t Layer1_primary[20] = {0, 3, 6, 7, 8, 15, 16, 20, 21, 22, 23, 36, 37, 38, 40, 44, 45, 49, 50, 52 };
uint8_t Layer1_secondary[22] = {51, 47, 42, 39, 11, 12, 19, 5, 10, 13, 18, 9, 14, 17, 24, 25, 27, 28, 57, 56, 53, 54};
//
uint8_t Layer2_primary[34] = {9, 14, 17, 21, 50, 46, 43, 38, 5, 10, 13, 18, 22, 51, 47, 42, 39, 34, 11, 12, 19, 23, 52, 48, 41, 40, 27, 28, 25, 24, 57, 56, 27, 28 };
uint8_t Layer2_secondary[13] = {0, 7, 8, 15, 16, 20, 49, 45, 44, 37, 36, 29, 32};
//
bool rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            // rgb_matrix_set_color_all(6,98,158);
            //
            // rgb_matrix_set_color_all(4,60,118);
            // rgb_matrix_set_color_all(0,39,61);
            rgb_matrix_set_color_all(0,0,100);
            rgb_matrix_set_color(27, 100, 0, 0);
            rgb_matrix_set_color(55, 50, 0, 50);
            // for (uint8_t i = 0; i < 36; i++) {
            //     rgb_matrix_set_color(Layer0_primary[i], 50, 127, 117);
            // }
            // for (uint8_t i = 0; i < 12; i++) {
            //     rgb_matrix_set_color(Layer0_secondary[i], 127, 15, 10);
            // }
            // for (uint8_t i = 0; i < 5; i++) {
            //     rgb_matrix_set_color(Layer0_mods[i], 127, 127, 0);
            // }
            // for (uint8_t i = 0; i < 5; i++) {
            //     rgb_matrix_set_color(Layer0_qmk[i], 33, 33, 33);
            // }
            return 1;
            break;
        case 1:
            // rgb_matrix_set_color_all(255,105,69);
            // rgb_matrix_set_color_all(255,157,56);
            // rgb_matrix_set_color_all(100,0,0);
            rgb_matrix_set_color_all(0,0,0);
            for (uint8_t i=0; i<22; i++) {
                rgb_matrix_set_color(Layer1_secondary[i], 100, 0, 0);
            }
            for (uint8_t i=0; i< 20; i++) {
                rgb_matrix_set_color(Layer1_primary[i], 103,22,22);
            }
            rgb_matrix_set_color(27, 0, 0, 100);
            rgb_matrix_set_color(55, 0, 100, 0);

            // rgb_matrix_set_color(6, 204, 255, 204);
            return 1;
            break;
        case 2:
            rgb_matrix_set_color_all(0,0,0);
            for (uint8_t i=0; i< 34; i++) {
                rgb_matrix_set_color(Layer2_primary[i], 50,0,50);
            }
            for (uint8_t i=0; i< 13; i++) {
                rgb_matrix_set_color(Layer2_secondary[i], 42,15,42);
            }
            rgb_matrix_set_color(27, 0, 100, 0);
            rgb_matrix_set_color(55, 0, 0, 100);
            // rgb_matrix_set_color(6, 75, 255, 75);
            // rgb_matrix_set_color(7, 75, 255, 75);
            return 1;
            break;
        case 3: //GMAIL Layer
            rgb_matrix_set_color_all(0, 100, 0);
            rgb_matrix_set_color(27, 50, 0, 50);
            rgb_matrix_set_color(55, 100, 0, 0);
            // rgb_matrix_set_color(6, 0, 204, 0);
            // rgb_matrix_set_color(7, 0, 204, 0);
            // rgb_matrix_set_color(8, 0, 204, 0);
            return 1;
            break;
        case 4:
            rgb_matrix_set_color_all(0, 0, 0);
            // rgb_matrix_set_color(6, 0, 128, 0);
            // rgb_matrix_set_color(7, 0, 128, 0);
            // rgb_matrix_set_color(8, 0, 128, 0);
            // rgb_matrix_set_color(3, 0, 128, 0);
            return 1;
            break;
        case 5:
            rgb_matrix_set_color_all(0, 0, 0);
            // rgb_matrix_set_color(6, 0, 255, 0);
            // rgb_matrix_set_color(7, 0, 255, 0);
            // rgb_matrix_set_color(8, 0, 255, 0);
            // rgb_matrix_set_color(3, 0, 255, 0);
            // rgb_matrix_set_color(4, 0, 255, 0);
            return 1;
            break;
        case 6:
            rgb_matrix_set_color_all(0, 0, 0);
            // rgb_matrix_set_color(6, 0, 255, 0);
            // rgb_matrix_set_color(7, 0, 255, 0);
            // rgb_matrix_set_color(8, 0, 255, 0);
            // rgb_matrix_set_color(3, 0, 255, 0);
            // rgb_matrix_set_color(4, 0, 255, 0);
            // rgb_matrix_set_color(5, 0, 255, 0);
            return 1;
            break;
        case 7:
            rgb_matrix_set_color_all(0, 0, 0);
            // rgb_matrix_set_color(6, 0, 255, 0);
            // rgb_matrix_set_color(7, 0, 255, 0);
            // rgb_matrix_set_color(8, 0, 255, 0);
            // rgb_matrix_set_color(3, 0, 255, 0);
            // rgb_matrix_set_color(4, 0, 255, 0);
            // rgb_matrix_set_color(5, 0, 255, 0);
            // rgb_matrix_set_color(1, 0, 255, 0);
            return 1;
            break;
        case 8:
            // Allows for a preview of RGB adjustments
            rgb_matrix_set_color(1, 255, 255, 255);
            return 1;
            break;
        default:
            return 1;
            break;
        }
    }


layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, 1, 2, 3);
}

