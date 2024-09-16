#include "niiico.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == DEAD_KEY && record->event.pressed) {
        uint8_t modifiers = get_mods();
        bool shifted = (modifiers & MOD_MASK_SHIFT) || (get_oneshot_mods() & MOD_MASK_SHIFT);
        switch (keycode) {
                case KC_O:
                    if (shifted) { tap_code16(LSFT(KC_O)); }
                    break;
                default: return true;
        }
    }
    return true;
}
