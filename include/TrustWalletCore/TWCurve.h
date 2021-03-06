// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once
#include "TWBase.h"

TW_EXTERN_C_BEGIN

/// Elliptic cruves
TW_EXPORT_ENUM()
enum TWCurve {
    TWCurveSECP256k1              /* "secp256k1" */,
    TWCurveED25519                /* "ed25519" */,
    TWCurveED25519Blake2bNano     /* "ed25519-blake2b-nano" */,
    TWCurveNIST256p1              /* "nist256p1" */,
};

TW_EXTERN_C_END
