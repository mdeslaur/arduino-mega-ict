//
// Copyright (c) 2018, Paul R. Swan
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
// OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
#include "CHustlerSoundGame.h"

//
// See the base game cpp comments for details about this platform.
//

//
// "hustlerb4" from MAME.
//
static const ROM_DATA2N s_romData2nZacScramConvSet2[] PROGMEM  = { // 01   02   04   08   10   20   40   80  100  200  400
                                                                   {0xce,0x01,0xff,0xc3,0xc3,0xc3,0xb7,0x08,0xc9,0x40,0xc9}, //  0 - 5C
                                                                   {0x3d,0x28,0x47,0xaf,0x3e,0x1f,0xaf,0x3d,0x32,0xdd,0x91}, //  1 - 5D
                                                                   {0} };  // end of list

//
// "hustlerb4" from MAME.
//
static const ROM_REGION s_romRegionZacScramConvSet2[] PROGMEM = { //
                                                                 {NO_BANK_SWITCH, 0x0000, 0x0800, s_romData2nZacScramConvSet2[0].data2n, 0x9fc1d60f, " 5C"}, // topa.c5 (HustlerB4)
                                                                 {NO_BANK_SWITCH, 0x0800, 0x0800, s_romData2nZacScramConvSet2[1].data2n, 0x3db57351, " 5D"}, // topb.d5 (HustlerB4)
                                                                 {0} }; // end of list


IGame*
CHustlerSoundGame::createInstanceZacScramConvSet2(
)
{
    return (new CHustlerSoundGame(s_romData2nZacScramConvSet2, s_romRegionZacScramConvSet2));
}


CHustlerSoundGame::CHustlerSoundGame(
    const ROM_DATA2N *romData2n,
    const ROM_REGION *romRegion
) : CFroggerSoundBaseGame( romData2n, romRegion )
{
}


