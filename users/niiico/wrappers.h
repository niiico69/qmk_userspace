#pragma once
#include "niiico.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// clang-format off


/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts

NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

// Définition des raccourcis
#define SHFT OSM(MOD_LSFT)
#define ALTGR OSL(_ALTGR)

// Définition des keycodes personnalisés
enum custom_keycodes {
    DEAD_KEY = SAFE_RANGE,
    ALT_TAB
};

// Left-hand home row mods
#define HOME_A RALT_T(BP_A)
#define HOME_U LALT_T(BP_U)
#define HOME_I LCTL_T(BP_I)
#define HOME_E LSFT_T(BP_E)

// Right-hand home row mods
#define HOME_T LSFT_T(BP_T)
#define HOME_S LCTL_T(BP_S)
#define HOME_R LALT_T(BP_R)
#define HOME_N RALT_T(BP_N)

// Left-hand home row mods for ergol
#define HOMR_A LGUI_T(KC_A)
#define HOMR_S LALT_T(KC_S)
#define HOMR_E LCTL_T(KC_D)
#define HOMR_N LSFT_T(KC_F)

// Right-hand home row mods for ergol
#define HOMR_R LSFT_T(KC_J)
#define HOMR_T LCTL_T(KC_K)
#define HOMR_I LALT_T(KC_L)
#define HOMR_U LGUI_T(KC_SCLN)

#define __________________BEPO_L0__________________        BP_DQUO,         BP_LDAQ, BP_RDAQ, BP_LPRN, BP_RPRN
#define __________________BEPO_L1__________________        BP_B,            BP_EACU, BP_P,    BP_O,    BP_EGRV
#define __________________BEPO_L2__________________        HOME_A,          HOME_U,  HOME_I,  HOME_E,  BP_COMM
#define __________________BEPO_L3__________________        LALT_T(BP_AGRV), BP_Y,    BP_X,    BP_DOT,  BP_K

#define __________________BEPO_R0__________________        BP_AT,   BP_PLUS, BP_MINUS, BP_SLSH,  BP_ASTR
#define __________________BEPO_R1__________________        BP_DCIR, BP_V,    BP_D,     BP_L,     BP_J
#define __________________BEPO_R2__________________        BP_C,    HOME_T,  HOME_S,   HOME_R,   HOME_N
#define __________________BEPO_R3__________________        BP_QUOT, BP_Q,    BP_G,     BP_H,     RALT_T(BP_F)

#define ______________AZERTY_BEPO_L0_______________        FR_DQUO,         FR_LDAQ, FR_RDAQ,      FR_LPRN,      FR_RPRN
#define ______________AZERTY_BEPO_L1_______________        FR_B,            FR_EACU, FR_P,         FR_O,         FR_EGRV
#define ______________AZERTY_BEPO_L2_______________        FR_A,            FR_U,    LALT_T(FR_I), LCTL_T(FR_E), FR_COMM
#define ______________AZERTY_BEPO_L3_______________        LALT_T(FR_AGRV), FR_Y,	 FR_X,         FR_DOT,       FR_K

#define ______________AZERTY_BEPO_R0_______________        FR_AT,   FR_PLUS,      FR_MINS,      FR_SLSH, FR_ASTR
#define ______________AZERTY_BEPO_R1_______________        FR_CIRC,	FR_V,         FR_D,         FR_L,    FR_J
#define ______________AZERTY_BEPO_R2_______________        FR_C,    LCTL_T(FR_T), LALT_T(FR_S), FR_R,    FR_N
#define ______________AZERTY_BEPO_R3_______________        FR_QUOT,	FR_Q,         FR_G,         FR_H,    RALT_T(FR_F)

#define ________________AZERTY_L0__________________        FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN
#define ________________AZERTY_L1__________________        FR_A,    FR_Z,    FR_E,    FR_R,    FR_T
#define ________________AZERTY_L2__________________        FR_Q,    FR_S,    FR_D,    FR_F,    FR_G
#define ________________AZERTY_L3__________________        FR_W,    FR_X,    FR_C,    FR_V,    FR_B

#define ________________AZERTY_R0__________________        FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV
#define ________________AZERTY_R1__________________        FR_Y,    FR_U,    FR_I,    FR_O,    FR_P
#define ________________AZERTY_R2__________________        FR_H,    FR_J,    FR_K,    FR_L,    FR_UGRV
#define ________________AZERTY_R3__________________        FR_N,    FR_M,    FR_COMM, FR_SCLN, FR_SLASH

#define _________________QWERTY_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

#define ________________NUMBER_LEFT________________        BP_1,  BP_2,  BP_3,  BP_4,  BP_5
#define ________________NUMBER_RIGHT_______________        BP_6,  BP_7,  BP_8,  BP_9,  BP_0
#define _________________FUNC_ROW1_________________        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define _________________FUNC_ROW2_________________        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10

#define ___________________BLANK___________________        _______, _______, _______, _______, _______
#define ___________________KC_NO___________________        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO


#define _________________SYMBL_L1__________________        BP_DQUO, BP_LDAQ, BP_RDAQ, BP_LPRN, BP_RPRN
#define _________________SYMBL_L2__________________        BP_MDSH, BP_LABK, BP_RABK, BP_LBRC, BP_RBRC
#define _________________SYMBL_L3__________________        BP_BSLS, BP_LCBR, BP_RCBR, BP_LCBR, BP_RCBR

#define _________________SYMBL_R1__________________        BP_AT,   BP_PLUS, BP_MINS, BP_SLSH, BP_ASTR
#define _________________SYMBL_R2__________________        BP_PERC, BP_AMPR, BP_PIPE, BP_BSLS,   KC_NO
#define _________________SYMBL_R3__________________        BP_GRV,  KC_PSCR, KC_SCRL, KC_PAUS,   KC_NO

#define _________________ALTGR_L1__________________        BP_CIRC, BP_LDAQ, BP_RDAQ, BP_DLR, BP_PERC
#define _________________ALTGR_L2__________________        BP_LCBR, BP_LPRN, BP_RPRN, BP_RCBR, BP_EQL
#define _________________ALTGR_L3__________________        BP_TILD, BP_LCBR, BP_RCBR, BP_UNDS, BP_HASH

#define _________________ALTGR_R1__________________        BP_AT,   BP_AMPR, BP_ASTR, BP_QUOT, BP_GRV
#define _________________ALTGR_R2__________________        BP_GRV,  BP_PLUS, BP_MINS, BP_SLSH, BP_DQUO
#define _________________ALTGR_R3__________________        BP_PIPE, BP_EXLM, BP_SCLN, BP_COMM, BP_QUES

#define _________________NUMBR_L1__________________        ________________NUMBER_LEFT________________
#define _________________NUMBR_L2__________________        _________________FUNC_ROW1_________________
#define _________________NUMBR_L3__________________        _________________FUNC_ROW2_________________

#define _________________NUMBR_R1__________________        ________________NUMBER_RIGHT_______________
#define _________________NUMBR_R2__________________        BP_ASTR, BP_4, BP_5, BP_6, BP_MINS
#define _________________NUMBR_R3__________________        BP_0,    BP_1, BP_2, BP_3, KC_PDOT


#define _________________ADJUST_L1_________________        RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD
#define _________________ADJUST_L2_________________        KC_NO,   RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD
#define _________________ADJUST_L3_________________        ___________________KC_NO___________________

#define _________________ADJUST_R1_________________        RGB_MOD,  RGB_VAI,          RGB_HUI,   RGB_SAI,       RGB_TOG
#define _________________ADJUST_R2_________________        RGB_RMOD, RGB_VAD,          RGB_HUD,   RGB_SAD,       KC_NO
#define _________________ADJUST_R3_________________        ___________________KC_NO___________________

#define ___________________NAV_L1__________________        KC_NO, KC_INS,           KC_HOME,   KC_PGUP,       KC_PSCR
#define ___________________NAV_L2__________________        KC_NO, KC_DEL,           KC_END,    KC_PGDN,       KC_SCRL
#define ___________________NAV_L3__________________        KC_NO, TO(_AZERTY_BEPO), TO(_BEPO_42), KC_NO, TO(_ERGO_L)

#define ___________________NAV_R1__________________        KC_NO, KC_HOME, KC_NO,   KC_PGUP,  KC_NO
#define ___________________NAV_R2__________________        KC_NO, KC_END,  KC_UP,   KC_PGDN,  KC_NO
#define ___________________NAV_R3__________________        KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO

#define __________________ERGO_L1__________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __________________ERGO_L2__________________        HOMR_A, HOMR_S, HOMR_E, HOMR_N, KC_G
#define __________________ERGO_L3__________________        KC_Z,    KC_X,    KC_C, KC_V,    KC_B

#define __________________ERGO_R1__________________        KC_Y,    KC_U,    KC_I,    KC_O, KC_P
#define __________________ERGO_R2__________________        KC_H,   HOMR_R,  HOMR_T,  HOMR_I,  HOMR_U
#define __________________ERGO_R3__________________        KC_N,  KC_M,    KC_COMM,    KC_DOT, RALT_T(KC_SLSH)

#define __________________E_NAV_L1_________________        KC_NO, KC_HOME, KC_UP,   KC_END,   KC_PGUP
#define __________________E_NAV_L2_________________        CW_TOGG, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_PGDN
#define __________________E_NAV_L3_________________        KC_NO, S(KC_TAB), KC_TAB, KC_NO, KC_NO

#define __________________E_NAV_R1_________________        RALT(KC_L), KC_7, KC_8,  KC_9,  S(KC_ASTR)
#define __________________E_NAV_R2_________________        RALT(KC_K), KC_4,  KC_5,  KC_6,  KC_0
#define __________________E_NAV_R3_________________        KC_N, KC_1, KC_2, KC_3, KC_DOT

#define __________________B_NAV_L1_________________        KC_NO, KC_HOME, KC_UP,   KC_END,   KC_PGUP
#define __________________B_NAV_L2_________________        CW_TOGG, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_PGDN
#define __________________B_NAV_L3_________________        KC_NO, S(KC_TAB), KC_TAB, KC_NO, KC_NO

#define __________________B_NAV_R1_________________        BP_SLSH, S(KC_7), S(KC_8),  S(KC_9),  BP_ASTR
#define __________________B_NAV_R2_________________        BP_MINS, S(KC_4),  S(KC_5),  S(KC_6),  BP_DOT
#define __________________B_NAV_R3_________________        S(KC_0), S(KC_1), S(KC_2), S(KC_3), BP_COMM

#define _________________MACROS_L1_________________        KC_KB_VOLUME_UP, KC_NO, KC_NO, KC_NO, KC_NO
#define _________________MACROS_L2_________________        KC_KB_MUTE, KC_NO, KC_NO, KC_NO, KC_NO
#define _________________MACROS_L3_________________        KC_KB_VOLUME_DOWN, TO(_AZERTY_BEPO), TO(_BEPO_42), KC_NO, TO(_ERGO_L)

#define _________________MACROS_R1_________________        KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F12
#define _________________MACROS_R2_________________        KC_NO, KC_F4, KC_F5, KC_F6, KC_F11
#define _________________MACROS_R3_________________        KC_NO, KC_F1, KC_F2, KC_F3, KC_F10

// clang-format on
