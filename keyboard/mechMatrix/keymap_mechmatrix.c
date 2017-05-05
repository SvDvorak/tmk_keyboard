#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* 0: Default layer
	* ,------------------------------------------------------------.
	* |  Esc|  1|  2|  3|  4|  5|    |  6|  7|  8|  9|  0|  -|  =  |
	* |-------------------------|Bspc|-----------------------------|
	* |  Tab|  Q|  W|  E|  R|  T|    |  Y|  U|  I|  O|  P|  [|  ]  |
	* |------------------------------------------------------------|
	* |     |  A|  S|  D|  F|  G|    |  H|  J|  K|  L|  ;|  '|     |
	* |Shift|-------------------| Ent|-----------------------|Shift|
	* |     |  Z|  X|  C|  V|  B|    |  N|  M|  ,|  .|  /|  \|     |
	* |------------------------------------------------------------|
	* |     |Pus|FN0|FN1| Space | DEL| AltGr |PgU|Hom| Up|End|     |
	* | Ctrl|------------------------------------------------| Ctrl|
	* |     |  Menu | Alt |                  |PgD|Lef|Dow|Rig|     |
	* `------------------------------------------------------------'
	*/
    KEYMAP
			(ESC,  1,   2,   3,   4,   5,   BSPC,  6,   7,   8,   9,   0,	MINS,   EQL,	\
			 TAB,  Q,   W,   E,   R,   T,          Y,   U,   I,   O,   P,   LBRC,   RBRC,   \
			 LSFT, A,   S,   D,   F,   G,   ENT,   H,   J,   K,   L,   SCLN,QUOT,   RSFT,   \
				   Z,   X,   C,   V,   B,          N,   M,   COMM,DOT, SLSH,BSLS,		    \
			 LCTL, PAUS,FN0, X,      SPC,   DEL, SPC,        PGUP,HOME,UP,  END,    RCTL,   \
				LGUI,     LALT,          				     PGDN,LEFT,DOWN,RGHT),
				 
	/* Overlay 1
	* ,------------------------------------------------------------.
	* | Mute| F1| F2| F3| F4| F5|    | F6| F7| F8| F9|F10|F11|  F12| 
	* |-------------------------|VolU|-----------------------------|
	* |     |   |   |   |   |   |    |   |   |   |   |   |   |     |
	* |------------------------------------------------------------|
	* |     |   |   |   |   |   |    |   |   |   |   |   |   |     |
	* |     |-------------------|VolD|-----------------------|     |
	* |     |   |   |   |   |   |    |   |   |   |   |   |   |     |
	* |------------------------------------------------------------|
	* |     |   |   |   |       |    |       |   |   |   |   |     |
	* |     |------------------------------------------------|     |
	* |     |       |     |                  |   |   |   |   |     |
	* `------------------------------------------------------------'
	*/
	KEYMAP
			(MUTE, F1, F2,  F3,  F4,  F5,  VOLU,  F6,  F7,  F8,  F9, F10,    F11,    F12,	\
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,   TRNS,   \
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,   TRNS,   \
				  TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,			\
			 TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,   TRNS,   TRNS,   \
				TRNS,     TRNS,          				     TRNS,TRNS,TRNS,TRNS),
};
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
