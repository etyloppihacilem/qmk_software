#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
        // ,--------------------------------------------------------------------------------.                      ,-----------------------------------------------------------------------------------------.
            KC_Q,               KC_W,               KC_E,               KC_R,       KC_T,                           KC_Y,       KC_U,               KC_I,               KC_O,               KC_P,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            LSFT_T(KC_A),       LT(3,KC_S),         LT(1,KC_D),         LT(2,KC_F), KC_G,                           KC_H,       LT(2,KC_J),         KC_K,               LT(3,KC_L),         RSFT_T(KC_SCLN),
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            LCTL_T(KC_Z),       LALT_T(KC_X),       LGUI_T(KC_C),       KC_V,       KC_B,                           KC_N,       KC_M,               RGUI_T(KC_COMM),    RALT_T(KC_DOT),     RCTL_T(KC_SLSH),
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
                                                                        // ,------------------------.      ,-------------------.
                                                                            LT(4,KC_TAB),   KC_BSPC,        KC_SPC,     KC_ENT
                                                                        // '--------------+---------'      '----------+--------'
        ),
	[1] = LAYOUT_split_3x5_2(
        // ,--------------------------------------------------------------------------------.                      ,-----------------------------------------------------------------------------------------.
            KC_NO,              KC_NO,              KC_NO,              KC_NO,      KC_NO,                          KC_WH_U,    KC_NO,              KC_NO,              KC_NO,              KC_DEL,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            KC_CAPS,            KC_NO,              QK_BOOT,            KC_NO,      KC_NO,                          KC_LEFT,    KC_DOWN,            KC_UP,              KC_RGHT,            KC_NO,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            KC_LCTL,            KC_LALT,            KC_LGUI,            KC_NO,      KC_NO,                          KC_WH_D,    KC_NO,              KC_RGUI,            KC_RALT,            KC_RCTL,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
                                                                        // ,------------------------.      ,-------------------.
                                                                            TO(4),          KC_ESC,         KC_ESC,     KC_ENT
                                                                        // '--------------+---------'      '----------+--------'
        ),
	[2] = LAYOUT_split_3x5_2(
        // ,--------------------------------------------------------------------------------.                      ,-----------------------------------------------------------------------------------------.
            KC_1,               KC_2,               KC_3,               KC_4,       KC_5,                           KC_6,       KC_7,               KC_8,               KC_9,               KC_0,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            LSFT_T(KC_EXLM),    KC_AT,              KC_HASH,            KC_COLN,    KC_DLR,                         KC_AMPR,    KC_QUOT,            KC_LPRN,            KC_RPRN,            RSFT_T(KC_BSLS),
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            LCTL_T(KC_CIRC),    LALT_T(KC_AMPR),    LGUI_T(KC_ASTR),    KC_MINS,    KC_EQL,                         KC_LCBR,    KC_RCBR,            RGUI_T(KC_LBRC),    RALT_T(KC_RBRC),    RCTL_T(KC_GRV),
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
                                                                        // ,------------------------.      ,-------------------.
                                                                            TG(4),          KC_DEL,         KC_ESC,    KC_ENT
                                                                        // '--------------+---------'      '----------+--------'
        ),
	[3] = LAYOUT_split_3x5_2(
        // ,--------------------------------------------------------------------------------.                      ,-----------------------------------------------------------------------------------------.
            KC_F1,              KC_F2,              KC_F3,              KC_F4,      KC_F5,                          KC_F6,      KC_F7,              KC_F8,              KC_F9,              KC_F10,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            RGB_TOG,            RGB_MOD,            RGB_SPI,            RGB_HUI,    KC_VOLU,                        KC_INS,     KC_HOME,            KC_PGUP,            KC_F11,             KC_F12,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            KC_NO,              RGB_RMOD,           RGB_SPD,            RGB_HUD,    KC_VOLD,                        KC_PAUS,    KC_END,             KC_PGDN,            KC_PSCR,            KC_SCRL,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
                                                                        // ,------------------------.      ,-------------------.
                                                                            KC_MUTE,        KC_MPLY,        KC_MRWD,    KC_MFFD
                                                                        // '--------------+---------'      '----------+--------'
        ),
	[4] = LAYOUT_split_3x5_2(
        // ,--------------------------------------------------------------------------------.                      ,-----------------------------------------------------------------------------------------.
            KC_ESC,             KC_NO,              KC_NO,              KC_NO,      KC_NO,                          KC_WH_D,    KC_WH_L,            KC_WH_R,            KC_NO,              TG(4),
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            KC_LSFT,            KC_NO,              KC_NO,              KC_NO,      KC_NO,                          KC_MS_L,    KC_MS_D,            KC_MS_U,            KC_MS_R,            KC_NO,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
            KC_LCTL,            KC_LALT,            KC_LGUI,            KC_NO,      KC_NO,                          KC_WH_U,    KC_BTN3,            KC_NO,              KC_NO,              KC_NO,
        // +-------------------+-------------------+-------------------+-----------+--------|                      |-----------+-------------------+-------------------+-------------------+-----------------|
                                                                        // ,------------------------.      ,-------------------.
                                                                            TG(4),          KC_TRNS,        KC_BTN1,    KC_BTN2
                                                                        // '--------------+---------'      '----------+--------'
        )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
