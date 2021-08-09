#pragma once

#include "global.h"

//Exported Constants
enum // TRANSITION_MUGSHOT
{
    MUGSHOT_LORELEI,
    MUGSHOT_BRUNO,
    MUGSHOT_AGATHA,
    MUGSHOT_LANCE,
    MUGSHOT_CHAMPION,
    MUGSHOTS_COUNT
};

#define B_TRANSITION_BLUR 0 //Checkers
#define B_TRANSITION_DISTORTED_WAVE 1 //Wavy
#define B_TRANSITION_HORIZONTAL_CORRUGATE 2 //Ripple
#define B_TRANSITION_BIG_POKEBALL 3
#define B_TRANSITION_SLIDING_POKEBALLS 4
#define B_TRANSITION_CLOCKWISE_BLACKFADE 5
#define B_TRANSITION_FULLSCREEN_WAVE 6
#define B_TRANSITION_BLACK_WAVE_TO_RIGHT 7 //Wave washes over screen
#define B_TRANSITION_SLICED_SCREEN 8 //The screen is chopped into slices
#define B_TRANSITION_WHITEFADE_IN_STRIPES 9
#define B_TRANSITION_GRID_SQUARES 10
#define B_TRANSITION_BLACK_DOODLES 11
#define B_TRANSITION_LORELEI 12
#define B_TRANSITION_BRUNO 13
#define B_TRANSITION_AGATHA 14
#define B_TRANSITION_LANCE 15
#define B_TRANSITION_CHAMPION 16
#define B_TRANSITION_ANTI_CLOCKWISE_SPIRAL 17
#define B_TRANSITION_CUSTOM_LOGO 18
