/**
 * Copyright 2020 Armando Faz Hernández
 * This file is part of faz_ecc_avx2.
 *
 * faz_ecc_avx2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * faz_ecc_avx2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with faz_ecc_avx2.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FAZ_HASH_AVX2_H
#define FAZ_HASH_AVX2_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdint.h>
#include <stdio.h>

#include "edwards255.h"

#ifdef __cplusplus
namespace faz {
namespace hash {
#endif /* __cplusplus */

typedef ALIGN struct point_extended_1way_full {
  EltFp25519_1w_fullradix X;
  EltFp25519_1w_fullradix Y;
  EltFp25519_1w_fullradix Z;
  EltFp25519_1w_fullradix T;
} Point255;

void h2c25519(Point255 *P, uint8_t *msg, size_t mlen);
void print_point(FILE *file, Point255 *P);

#ifdef __cplusplus
} /* namespace fp */
} /* namespace faz */
} /* extern C */
#endif /* __cplusplus */

#endif /* FAZ_HASH_AVX2_H */