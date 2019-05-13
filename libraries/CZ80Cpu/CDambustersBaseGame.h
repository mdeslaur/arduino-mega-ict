//
// Copyright (c) 2019, Paul R. Swan
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
#ifndef CDambustersBaseGame_h
#define CDambustersBaseGame_h

#include "CGame.h"


class CDambustersBaseGame : public CGame
{
    public:

        //
        // CDambustersBaseGame
        //

        virtual PERROR interruptCheck(
        );

        static PERROR onAddressRemap(
            void   *cDambustersBaseGame,
            UINT32  addressIn,
            UINT32 *addressOut
        );

        static PERROR onDataRemap(
            void   *cDambustersBaseGame,
            UINT32  address,
            UINT16  dataIn,
            UINT16 *dataOut
        );

        //
        // Custom function to calculate the CRC of the NV RAM to verify it's keeping data
        //
        static PERROR nvRamCrc(
            void *cDambustersBaseGame
        );

    protected:

        CDambustersBaseGame(
            const ROM_REGION *romRegion
        );

        ~CDambustersBaseGame(
        );

};

#endif

