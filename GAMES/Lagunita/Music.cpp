#include "Music.hpp"

/* MIDI score converted in bytes stored in PROGMEM. */
const uint16_t western[] PROGMEM = {
NOTE_E4,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_F4,272, NOTE_E4,136,
 NOTE_REST,136, NOTE_E4,136, NOTE_REST,409, NOTE_D4,136, NOTE_REST,409, NOTE_D4,272, NOTE_REST,818, NOTE_C4,136,
 NOTE_REST,409, NOTE_C4,136, NOTE_REST,409, NOTE_C4,136, NOTE_REST,409, NOTE_F4,272, NOTE_REST,272, NOTE_E4,545,
 NOTE_REST,545, NOTE_D4,272, NOTE_REST,818, NOTE_E4,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_E4,136,
 NOTE_REST,409, NOTE_F4,272, NOTE_E4,136, NOTE_REST,136, NOTE_E4,136, NOTE_REST,409, NOTE_D4,136, NOTE_REST,409,
 NOTE_D4,272, NOTE_REST,818, NOTE_C4,136, NOTE_REST,409, NOTE_C4,136, NOTE_REST,409, NOTE_C4,136, NOTE_REST,409,
 NOTE_F4,272, NOTE_REST,272, NOTE_E4,545, NOTE_REST,545, NOTE_D4,272, NOTE_REST,818, NOTE_C4,136, NOTE_REST,409,
 NOTE_C4,272, NOTE_B3,272, NOTE_A3,545, NOTE_C4,545, NOTE_B3,818, NOTE_G3,272, NOTE_E3,1090, NOTE_C4,136,
 NOTE_REST,409, NOTE_C4,272, NOTE_B3,272, NOTE_A3,545, NOTE_C4,545, NOTE_B3,818, NOTE_G3,272, NOTE_E3,1090,
 NOTE_REST,272, NOTE_REST,545, NOTE_D3,272, NOTE_A3,545, NOTE_F3,545, NOTE_E3,1090, NOTE_REST,1090, NOTE_F3,272,
 NOTE_REST,545, NOTE_F3,272, NOTE_C4,545, NOTE_A3,545, NOTE_B3,1090, NOTE_REST,818, NOTE_C4,136, NOTE_D4,136,
 NOTE_REST,272, NOTE_C3,136, NOTE_REST,136, NOTE_E4,272, NOTE_C3,136, NOTE_REST,136, NOTE_E4,272, NOTE_C3,136,
 NOTE_REST,136, NOTE_F4,272, NOTE_E4,136, NOTE_REST,136, NOTE_E4,272, NOTE_G2,136, NOTE_REST,136, NOTE_D4,272,
 NOTE_G2,136, NOTE_REST,136, NOTE_D4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_C4,272,
 NOTE_F2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136,
 NOTE_F4,272, NOTE_F2,136, NOTE_REST,136, NOTE_E4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136,
 NOTE_D4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_E4,272, NOTE_C3,136, NOTE_REST,136,
 NOTE_E4,272, NOTE_C3,136, NOTE_REST,136, NOTE_E4,272, NOTE_C3,136, NOTE_REST,136, NOTE_F4,272, NOTE_E4,136,
 NOTE_REST,136, NOTE_E4,272, NOTE_G2,136, NOTE_REST,136, NOTE_D4,272, NOTE_G2,136, NOTE_REST,136, NOTE_D4,272,
 NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_C4,272,
 NOTE_F2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_F4,272, NOTE_F2,136, NOTE_REST,136,
 NOTE_E4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_D4,272, NOTE_G2,136, NOTE_REST,409,
 NOTE_G2,136, NOTE_REST,136, NOTE_C4,136, NOTE_REST,136, NOTE_A2,136, NOTE_REST,136, NOTE_C4,272, NOTE_B3,272,
 NOTE_A3,272, NOTE_A2,136, NOTE_REST,136, NOTE_C4,272, NOTE_A2,136, NOTE_REST,136, NOTE_B3,272, NOTE_E2,136,
 NOTE_REST,409, NOTE_G3,272, NOTE_E3,272, NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,136, NOTE_C4,136,
 NOTE_REST,136, NOTE_A2,136, NOTE_REST,136, NOTE_C4,272, NOTE_B3,272, NOTE_A3,272, NOTE_A2,136, NOTE_REST,136,
 NOTE_C4,272, NOTE_A2,136, NOTE_REST,136, NOTE_B3,272, NOTE_E2,136, NOTE_REST,409, NOTE_G3,272, NOTE_E3,272,
 NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,136, NOTE_D3,272, NOTE_D2,136, NOTE_REST,409, NOTE_D3,272,
 NOTE_A3,272, NOTE_D2,136, NOTE_REST,136, NOTE_F3,272, NOTE_D2,272, NOTE_E3,272, NOTE_E2,136, NOTE_REST,409,
 NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,136, NOTE_F3,272, NOTE_F2,136,
 NOTE_REST,409, NOTE_F3,272, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_A3,272, NOTE_F2,136, NOTE_REST,136,
 NOTE_B3,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,409, NOTE_C4,136,
 NOTE_D4,136, NOTE_REST,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_F4,272,
 NOTE_E4,136, NOTE_REST,136, NOTE_E4,136, NOTE_REST,409, NOTE_D4,136, NOTE_REST,409, NOTE_D4,272, NOTE_REST,818,
 NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136,
 NOTE_REST,136, NOTE_F4,272, NOTE_F2,136, NOTE_REST,136, NOTE_E4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136,
 NOTE_REST,136, NOTE_D4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_E4,136, NOTE_REST,409,
 NOTE_E4,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_F4,272, NOTE_E4,136, NOTE_REST,136, NOTE_E4,136,
 NOTE_REST,409, NOTE_D4,136, NOTE_REST,409, NOTE_D4,272, NOTE_REST,818, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136,
 NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_F4,272, NOTE_F2,136,
 NOTE_REST,136, NOTE_E4,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_D4,272, NOTE_G2,136,
 NOTE_REST,409, NOTE_G2,136, NOTE_REST,136, NOTE_C4,136, NOTE_REST,136, NOTE_A2,136, NOTE_REST,136, NOTE_C4,272,
 NOTE_B3,272, NOTE_A3,272, NOTE_A2,136, NOTE_REST,136, NOTE_C4,272, NOTE_A2,136, NOTE_REST,136, NOTE_B3,272,
 NOTE_E2,136, NOTE_REST,409, NOTE_G3,272, NOTE_E3,272, NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,136,
 NOTE_C4,136, NOTE_REST,136, NOTE_A2,136, NOTE_REST,136, NOTE_C4,272, NOTE_B3,272, NOTE_A3,272, NOTE_A2,136,
 NOTE_REST,136, NOTE_C4,272, NOTE_A2,136, NOTE_REST,136, NOTE_B3,272, NOTE_E2,136, NOTE_REST,409, NOTE_G3,272,
 NOTE_E3,272, NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,136, NOTE_D3,272, NOTE_D2,136, NOTE_REST,409,
 NOTE_D3,272, NOTE_A3,272, NOTE_D2,136, NOTE_REST,136, NOTE_F3,272, NOTE_D2,272, NOTE_E3,272, NOTE_E2,136,
 NOTE_REST,409, NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,409, NOTE_E2,136, NOTE_REST,136, NOTE_F3,272,
 NOTE_F2,136, NOTE_REST,409, NOTE_F3,272, NOTE_C4,272, NOTE_F2,136, NOTE_REST,136, NOTE_A3,272, NOTE_F2,136,
 NOTE_REST,136, NOTE_B3,272, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,409, NOTE_G2,136, NOTE_REST,409,
 NOTE_C4,136, NOTE_D4,136, NOTE_REST,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_E4,136, NOTE_REST,409,
 NOTE_F4,272, NOTE_E4,136, NOTE_REST,136, NOTE_E4,136, NOTE_REST,409, NOTE_D4,136, NOTE_REST,409, NOTE_D4,272,
 NOTE_REST,818, NOTE_C4,136, NOTE_REST,409, NOTE_C4,136, NOTE_REST,409, NOTE_C4,136, NOTE_REST,409, NOTE_F4,272,
 NOTE_REST,272, NOTE_E4,545, NOTE_REST,545, NOTE_D4,272, NOTE_REST,818, NOTE_E4,136, NOTE_REST,409, NOTE_E4,136,
 NOTE_REST,409, NOTE_E4,136, NOTE_REST,409, NOTE_F4,272, NOTE_E4,136, NOTE_REST,136, NOTE_E4,136, NOTE_REST,409,
 NOTE_D4,136, NOTE_REST,409, NOTE_D4,272, NOTE_REST,818, NOTE_C4,136, NOTE_REST,409, NOTE_C4,136, NOTE_REST,409,
 NOTE_C4,136, NOTE_REST,409, NOTE_F4,272, NOTE_REST,272, NOTE_E4,545, NOTE_REST,545, NOTE_D4,272, NOTE_REST,818,
 NOTE_A3,272, NOTE_E4,272, NOTE_C4,272, NOTE_A3,272, NOTE_A3,272, NOTE_E4,272, NOTE_C4,272, NOTE_A3,272,
 NOTE_E3,272, NOTE_D4,272, NOTE_C4,272, NOTE_B3,272, NOTE_E3,272, NOTE_B3,272, NOTE_A3,272, NOTE_G3,272,
 NOTE_F3,272, NOTE_C4,272, NOTE_B3,272, NOTE_A3,272, NOTE_F3,272, NOTE_C4,272, NOTE_B3,272, NOTE_A3,272,
 NOTE_G3,272, NOTE_A3,272, NOTE_B3,272, NOTE_D4,272, NOTE_G3,272, NOTE_C4,272, NOTE_D4,272, NOTE_E4,272,
 NOTE_REST,272, NOTE_E4,272, NOTE_C4,272, NOTE_A3,272, NOTE_A3,272, NOTE_E4,272, NOTE_C4,272, NOTE_A3,272,
 NOTE_E3,272, NOTE_D4,272, NOTE_C4,272, NOTE_B3,272, NOTE_E3,272, NOTE_B3,272, NOTE_A3,272, NOTE_G3,272,
 NOTE_F3,272, NOTE_C5,272, NOTE_B4,272, NOTE_A4,272, NOTE_F3,272, NOTE_C5,272, NOTE_B4,272, NOTE_A4,272,
 NOTE_G3,272, NOTE_G4,272, NOTE_A4,272, NOTE_B4,272, NOTE_G3,272, NOTE_C5,272, NOTE_D5,272, NOTE_E5,272,
 NOTE_REST,272, NOTE_D4,272, NOTE_E4,272, NOTE_G4,272, NOTE_C3,272, NOTE_D4,272, NOTE_E4,272, NOTE_G4,272,
 NOTE_G2,272, NOTE_C4,272, NOTE_D4,272, NOTE_G4,272, NOTE_G2,272, NOTE_C4,272, NOTE_D4,272, NOTE_G4,272,
 NOTE_F2,272, NOTE_C4,272, NOTE_D4,272, NOTE_E4,272, NOTE_F2,272, NOTE_F4,272, NOTE_E4,272, NOTE_D4,272,
 NOTE_G2,272, NOTE_D4,272, NOTE_C4,272, NOTE_B3,272, NOTE_G2,272, NOTE_G3,272, NOTE_A3,272, NOTE_B3,272,
 NOTE_REST,272, NOTE_D4,272, NOTE_E4,272, NOTE_G4,272, NOTE_C3,272, NOTE_D4,272, NOTE_E4,272, NOTE_G4,272,
 NOTE_G2,272, NOTE_C4,272, NOTE_D4,272, NOTE_G4,272, NOTE_G2,272, NOTE_C4,272, NOTE_D4,272, NOTE_G4,272,
 NOTE_F2,272, NOTE_E4,272, NOTE_F4,272, NOTE_A4,272, NOTE_F2,272, NOTE_E4,272, NOTE_F4,272, NOTE_A4,272,
 NOTE_G2,272, NOTE_A4,272, NOTE_B4,272, NOTE_C5,272, NOTE_G2,272, NOTE_B4,272, NOTE_G4,272, NOTE_D4,272,
 NOTE_REST,272, NOTE_A3,272, NOTE_B3,272, NOTE_C4,272, NOTE_A2,272, NOTE_A3,272, NOTE_B3,272, NOTE_C4,272,
 NOTE_E2,272, NOTE_E3,272, NOTE_A3,272, NOTE_B3,272, NOTE_E2,272, NOTE_E3,272, NOTE_A3,272, NOTE_B3,272,
 NOTE_A2,272, NOTE_A3,272, NOTE_B3,272, NOTE_C4,272, NOTE_A2,272, NOTE_A3,272, NOTE_B3,272, NOTE_C4,272,
 NOTE_E2,272, NOTE_E3,272, NOTE_A3,272, NOTE_B3,272, NOTE_E2,272, NOTE_E3,272, NOTE_A3,272, NOTE_B3,272,
 NOTE_REST,272, NOTE_D3,272, NOTE_F3,272, NOTE_A3,272, NOTE_D2,272, NOTE_D3,272, NOTE_F3,272, NOTE_A3,272,
 NOTE_E2,272, NOTE_E3,272, NOTE_G3,272, NOTE_B3,272, NOTE_E2,272, NOTE_E3,272, NOTE_G3,272, NOTE_B3,272,
 NOTE_F2,272, NOTE_F3,272, NOTE_A3,272, NOTE_C4,272, NOTE_F2,272, NOTE_F3,272, NOTE_A3,272, NOTE_C4,272,
 NOTE_G2,272, NOTE_G3,272, NOTE_B3,272, NOTE_D4,272, NOTE_G2,272, NOTE_D4,272, NOTE_E4,272, NOTE_F4,272,
 TONES_END
};

void Music::play() {
  sound.volumeMode(VOLUME_ALWAYS_NORMAL);
  sound.tones(western);
};
