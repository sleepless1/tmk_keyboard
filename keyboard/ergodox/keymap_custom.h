//  My own special blend.  -Aaron

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Default Layer
     *
     * |    ~   |   !  |   @  |   #  |   $  |   %  |      |           |      |   ^  |   &  |   *  |   (  |   )  |        |
     * |    `   |   1  |   2  |   3  |   4  |   5  |  ESC |           |NumTog|   6  |   7  |   8  |   9  |   0  |  INS   |
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |NumMom|           |NumMom|   Y  |   U  |   I  |   O  |   P  |  \ |   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | CapsLck|   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|  Fn  |           |  Fn  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl|  _   |   +  |   {  |   }  |                                       | Left | Down |  Up  | Rght | RCtrl|
     *   |      |  -   |   =  |   [  |   ]  |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LGui | Home |       | PgUp | RGui |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | End  |       | PgDn |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 `--------------------'       `--------------------'
     *  Function Layer
     *
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |   6  |   7  |   8  |   9  |   0  | PrnScrn|
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      | VolUp|      |           |      | VolUp|      |      |      |      | ScrLock|
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      | VolDn|------|           |------| VolDn|      |      |      |      |        |
     * |--------+------+------+------+------+------|  Fn  |           |  Fn  |------+------+------+------+------+--------|
     * |        |      |      |      |      | Mute |      |           |      | Mute |      |  Up  |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Sleep| Wake |      |      |      |                                       | Left | Down | Rght |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LGui | PgUp |       | Home | RGui |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | PgDn |       | End  |      |      |
     *                                 | Space| Enter|------|       |------| Del  | BkSp |
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      | LAlt |       | RAlt |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * TODO: Numpad layer
     *
     */

    KEYMAP(  // layer 0 : default
        // left hand
         GRV,  1,   2,   3,   4,   5,   ESC,
         TAB,  Q,   W,   E,   R,   T,   FN3,
        CAPS,  A,   S,   D,   F,   G,
        LSFT,  Z,   X,   C,   V,   B,   FN1,
        LCTL,MINS,EQL,LBRC,RBRC,
                                      LGUI,HOME,
                                            END,
                                 BSPC, DEL,LALT,
        // right hand
             FN2, 6,   7,   8,   9,   0,    INS,
             FN3, Y,   U,   I,   O,   P,   BSLS,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN1, N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,RCTL,
        PGUP,RGUI,
        PGDN,
        RALT,ENT, SPC
    ),

    KEYMAP(  // layer 1 : function keys + inverted thumbs
        // left hand
          NO,  F1,  F2,  F3,  F4,  F5, F11,
          NO,  NO,  NO,MPLY,  NO,VOLU,  NO,
          NO,  NO,MPRV,MSTP,MNXT,VOLD,
          NO,  NO,  NO,  NO,  NO,MUTE,TRNS,
        SLEP,WAKE,  NO,  NO,  NO,
                                      LGUI,PGUP,
                                           PGDN,
                                  SPC, ENT,LALT,
        // right hand
              F12,  F6,  F7,  F8,  F9, F10,PSCR,
               NO,VOLU,  NO,MPLY,  NO,  NO,SLCK,
                  VOLD,MPRV,MSTP,MNXT,  NO,PAUS,
             TRNS,MUTE,MAIL,  UP,  NO,  NO,  NO,
                       LEFT,DOWN,RGHT,  NO,  NO,
        HOME,RGUI,
        END ,
        BSPC, DEL,RALT
    ),

    KEYMAP(  // layer 2: numpad
        // left hand
         FN0,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,TRNS,
          NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
           TRNS,NLCK,BSPC,PSLS,PAST,PMNS,CALC,
           TRNS,  NO,  P7,  P8,  P9,PPLS,  NO,
                  NO,  P4,  P5,  P6,PPLS,  NO,
             NO,  NO,  P1,  P2,  P3,PENT,  NO,
                       P0,  P0, DOT,PENT,  NO,
          NO,  NO,
          NO,
          NO,PENT,  NO
    )

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    ACTION_LAYER_MOMENTARY(1),                      // FN1  - Function Keys
    ACTION_LAYER_TOGGLE(2),                         // FN2  - Numpad
    ACTION_LAYER_MOMENTARY(2)                       // FN3  - Momentary Numpad
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

