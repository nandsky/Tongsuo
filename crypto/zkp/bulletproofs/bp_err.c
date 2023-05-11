/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2023 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/zkpbperr.h>
#include "crypto/zkpbperr.h"

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA ZKP_BP_str_reasons[] = {
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_EXCEEDS_GENS_CAPACITY),
    "exceeds gens capacity"},
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_EXCEEDS_MAX_AGG_NUM),
    "exceeds max agg num"},
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_EXCEEDS_MAX_BITS),
    "exceeds max bits"},
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_EXCEEDS_PARTY_CAPACITY),
    "exceeds party capacity"},
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_EXCEEDS_PP_CAPACITY),
    "exceeds pp capacity"},
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_TRANSCRIPT_INIT_FAILED),
    "transcript init failed"},
    {ERR_PACK(ERR_LIB_ZKP_BP, 0, ZKP_BP_R_WITNESS_INVALID), "witness invalid"},
    {0, NULL}
};

#endif

int ossl_err_load_ZKP_BP_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_reason_error_string(ZKP_BP_str_reasons[0].error) == NULL)
        ERR_load_strings_const(ZKP_BP_str_reasons);
#endif
    return 1;
}
