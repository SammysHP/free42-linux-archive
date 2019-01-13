/*****************************************************************************
 * Free42 -- an HP-42S calculator simulator
 * Copyright (C) 2004-2019  Thomas Okken
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see http://www.gnu.org/licenses/.
 *****************************************************************************/

#ifndef CORE_LINALG1_H
#define CORE_LINALG1_H 1

#include "core_globals.h"

int linalg_div(const vartype *left, const vartype *right,
                             void (*completion)(int, vartype *));
int linalg_mul(const vartype *left, const vartype *right,
                             void (*completion)(int, vartype *));
int linalg_inv(const vartype *src, void (*completion)(int, vartype *));
int linalg_det(const vartype *src, void (*completion)(int, vartype *));

#endif
