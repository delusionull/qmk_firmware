#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#define TAPPING_TERM 200

#define THE_IMPERIAL_MARCH \
  HD_NOTE(_A4), HD_NOTE(_A4), HD_NOTE(_A4), H__NOTE(_F4), Q__NOTE(_C5), \
  HD_NOTE(_A4), H__NOTE(_F4),  Q__NOTE(_C5), WD_NOTE(_A4), \
  HD_NOTE(_E5), HD_NOTE(_E5), HD_NOTE(_E5), H__NOTE(_F5), Q__NOTE(_C5), \
  HD_NOTE(_A4), H__NOTE(_F4),  Q__NOTE(_C5), WD_NOTE(_A4)




#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(THE_IMPERIAL_MARCH)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(DVORAK_SOUND), \
                                  SONG(QWERTY_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

#endif
