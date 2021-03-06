/* Define aliases for libm float functions.
   Copyright (C) 2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _LIBM_ALIAS_FLOAT_H
#define _LIBM_ALIAS_FLOAT_H

/* Define aliases for a float libm function that has internal name
   FROM ## f ## R and public names TO ## suffix ## R for each suffix
   of a supported floating-point type with the same format as float.
   This should only be used for functions where such public names
   exist for _FloatN types, not for implementation-namespace exported
   names (where there is one name per format, not per type) or for
   obsolescent functions not provided for _FloatN types.  */
#define libm_alias_float_r(from, to, r)		\
  weak_alias (from ## f ## r, to ## f ## r)

/* Likewise, but without the R suffix.  */
#define libm_alias_float(from, to) libm_alias_float_r (from, to, )

#endif
