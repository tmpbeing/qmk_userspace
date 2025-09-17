#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _NAV,
  _MOUSE,
  _MEDIA,
  _FUNC,
  _NUM,
  _SYM,

  _GAME
};

enum keycodes {
    SMTD_KEYCODES_BEGIN = SAFE_RANGE,

    // left home row
    CKC_A,
    CKC_S,
    CKC_D,
    CKC_F,

    // right home row
    CKC_J,
    CKC_K,
    CKC_L,
    CKC_QUOT,

    // left thumb cluster
    CKC_ESC,
    CKC_SPC,
    CKC_TAB,

    // right thumb cluster
    CKC_ENT,
    CKC_BSPC,
    CKC_DEL,

    SMTD_KEYCODES_END
};

// include after enum def
#include "sm_td.h"


#define XXX KC_NO
#define ___ KC_TRANSPARENT
#define GAME TO(_GAME)

//@formatter:off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        XXX,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    GAME,
        XXX,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXX,
        XXX, CKC_A,  CKC_S,   CKC_D,   CKC_F,    KC_G,                     KC_H,   CKC_J,   CKC_K,   CKC_L,CKC_QUOT,    XXX,
        XXX,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,  KC_HOME,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXX,
                                XXX, CKC_ESC, CKC_SPC, CKC_TAB,  CKC_ENT, CKC_BSPC, CKC_DEL, KC_ALGR
    ),

    [_NAV] = LAYOUT(
        XXX, XXX,     XXX,     XXX,     XXX,     XXX,                XXX,      XXX,     XXX,     XXX,     XXX,     XXX,
        XXX, XXX,     XXX,     XXX,     XXX,     XXX,                KC_AGIN,  KC_PSTE, KC_COPY, KC_CUT, KC_UNDO,  XXX,
        XXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXX,                KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG, XXX,
        XXX, XXX,     XXX,     XXX,     XXX,     XXX, ___,    ___,   KC_HOME,  KC_PGDN, KC_PGUP, KC_END,  KC_INS,  XXX,
                               XXX,     XXX,     XXX, XXX,    ___,   ___,      ___,     ___
    ),

    [_MOUSE] = LAYOUT(
        XXX, XXX,     XXX,     XXX,     XXX,     XXX,                XXX,     XXX,     XXX,     XXX,     XXX,     XXX,
        XXX, XXX,     XXX,     XXX,     XXX,     XXX,                XXX,     XXX,     XXX,     XXX,     XXX,     XXX,
        XXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXX,                XXX,     MS_LEFT, MS_DOWN,  MS_UP, MS_RGHT, XXX,
        XXX, XXX,     XXX,     XXX,     XXX,     XXX, ___,  ___,     XXX,     MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXX,
                               XXX,     XXX,     XXX, XXX,  MS_BTN3, MS_BTN1, MS_BTN2, XXX
    ),

    [_MEDIA] = LAYOUT(
       XXX, XXX,     XXX,      XXX,     XXX,     XXX,                RM_PREV, RM_SPDU, RM_VALU, RM_VALD, RM_SPDD, XXX,
       XXX, XXX,     XXX,      XXX,     XXX,     XXX,                RM_NEXT, RM_HUEU, RM_SATU, RM_SATD, RM_TOGG, XXX,
       XXX, KC_LGUI, KC_LALT,  KC_LCTL, KC_LSFT, XXX,                KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXX,     XXX,
       XXX, XXX,     XXX,      XXX,     XXX,     XXX, ___,  ___,     XXX,     BL_BRTG, BL_UP,   BL_DOWN, BL_TOGG, XXX,
                               XXX,     XXX,     XXX, XXX,  KC_MSTP, KC_MPLY, KC_MUTE, XXX
    ),

    [_FUNC] = LAYOUT(
       XXX, XXX,    XXX,   XXX,   XXX,    XXX,                     XXX, XXX,     XXX,     XXX,     XXX,     XXX,
       XXX, KC_F12, KC_F7, KC_F8, KC_F9,  KC_PSCR,                 XXX, XXX,     XXX,     XXX,     XXX,  XXX,
       XXX, KC_F11, KC_F4, KC_F5, KC_F6,  KC_SCRL,                 XXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXX,
       XXX, KC_F10, KC_F1, KC_F2, KC_F3,  KC_PAUS, ___,       ___, XXX, XXX,     XXX,     XXX,     XXX,     XXX,
                           XXX,   KC_APP, KC_SPC,  KC_TAB,    XXX, XXX, XXX,     XXX
    ),

    [_NUM] = LAYOUT(
        XXX, XXX,     XXX,  XXX,  XXX,  XXX,                   XXX, XXX,     XXX,     XXX,     XXX,     XXX,
        XXX, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,               XXX, XXX,     XXX,     XXX,     XXX,  XXX,
        XXX, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,                XXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXX,
        XXX, KC_GRV,  KC_1, KC_2, KC_3, KC_BSLS, ___,     ___, XXX, XXX,     XXX,     XXX,     XXX,     XXX,
                            XXX,  KC_DOT,  KC_0, KC_MINS, XXX, XXX, XXX,     XXX
    ),

    [_SYM] = LAYOUT(
        XXX, XXX,     XXX,     XXX,     XXX,     XXX,                     XXX, XXX,     XXX,     XXX,     XXX,     XXX,
        XXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                 XXX, XXX,     XXX,     XXX,     XXX,  XXX,
        XXX, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                 XXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXX,
        XXX, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, ___,       ___, XXX, XXX,     XXX,     XXX,     XXX,     XXX,
                               XXX,     KC_LPRN, KC_RPRN, KC_UNDS,   XXX, XXX, XXX,     XXX
    ),

    [_GAME] = LAYOUT(
     KC_ESC,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0, TO(_QWERTY),
     KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXX,
    KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,   CKC_J,   CKC_K,   CKC_L,CKC_QUOT,    XXX,
    KC_RCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,     ___,      ___,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXX,
                            KC_PSCR,  KC_ENT,  KC_SPC, KC_LALT,  CKC_ENT, CKC_BSPC, CKC_DEL, KC_ALGR
    ),
};
//@formatter:on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
    [_NAV] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGDN, KC_PGUP)},
    [_MOUSE] = { ENCODER_CCW_CW(MS_WHLL, MS_WHLR), ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
    [_MEDIA] = { ENCODER_CCW_CW(RM_PREV, RM_NEXT), ENCODER_CCW_CW(KC_MRWD, KC_MFFD)},
    [_FUNC] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
    [_NUM] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
    [_SYM] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
    [_GAME] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
};
#endif

smtd_resolution on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        // left home row
        SMTD_MT_ON_MKEY(CKC_A, KC_A, KC_LGUI, 2)
        SMTD_MT_ON_MKEY(CKC_S, KC_S, KC_LALT, 2)
        SMTD_MT_ON_MKEY(CKC_D, KC_D, KC_LCTL, 2)
        SMTD_MT_ON_MKEY(CKC_F, KC_F, KC_LSFT, 2)
        // right home row
        SMTD_MT_ON_MKEY(CKC_J, KC_J, KC_LSFT, 2)
        SMTD_MT_ON_MKEY(CKC_K, KC_K, KC_LCTL, 2)
        SMTD_MT_ON_MKEY(CKC_L, KC_L, KC_LALT, 2)
        SMTD_MT_ON_MKEY(CKC_QUOT, KC_QUOT, KC_LGUI, 2)
        // left thumb cluster
        SMTD_LT_ON_MKEY(CKC_ESC, KC_ESC, _MEDIA, 2) // 3
        SMTD_LT_ON_MKEY(CKC_SPC, KC_SPC, _NAV, 2) // 1
        SMTD_LT_ON_MKEY(CKC_TAB, KC_TAB, _MOUSE, 2) //2
        // right thumb cluster
        SMTD_LT_ON_MKEY(CKC_ENT, KC_ENT, _SYM, 2) // 6
        SMTD_LT_ON_MKEY(CKC_BSPC, KC_BSPC, _NUM, 2) // 5
        SMTD_LT_ON_MKEY(CKC_DEL, KC_DEL, _FUNC, 2) // 4
    }

    return SMTD_RESOLUTION_UNHANDLED;
}

uint32_t get_smtd_timeout(uint16_t keycode, smtd_timeout timeout) {
    /* switch (keycode) { */
    /*     case _: */
    /* } */
    return get_smtd_timeout_default(timeout);
}


/* layer_state_t layer_state_set_user(layer_state_t state) { */
/*   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST); */
/* } */


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_smtd(keycode, record)) {
      return false;
  }
  if (record->event.pressed) {
    // set_timelog();
  }
  return true;
}

