/***************************************************************************
 *   Copyright (C) 2008 by C J Plooy                                       *
 *   cornwarecjp@lavabit.com                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2.1 of the  *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Lesser General Public License for more details.                   *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*
KOST is the Kepler Orbit Simulation Toolkit.
*/

#ifndef KOST_SETTINGS_H
#define KOST_SETTINGS_H

/*
If you want non-default data types, define them here:
(Also, inlcude the relevant headers here)

For instance, for use with the Orbiter SDK,
you might want to do:

#include "OrbiterAPI.h"
#define kostVector3    VECTOR3
#define kostMatrix3    MATRIX3
#define kostElements   ELEMENTS
#undef  kostOrbitParam

#define kostReal       double

kostOrbitParam needs to be undefined, because
it contains additional parameters that are not
present in Orbiter's ORBITPARAM struct.
So, these types are NOT COMPATIBLE!

Most changes here require a re-compile of the KOST library.
The following is the default, suitable for
use in a standalone C or C++ application:
*/

#undef btVector3
#undef kostMatrix3
#undef kostElements
#undef kostOrbitParam

#undef btScalar


/*
The following constant is used as a replacement value for zero
in formulas where zero itself would give an error, e.g. division
by zero.

It should generally be as small as possible, but
(KOST_VERYSMALL + 1.0) - 1.0 should be sufficiently accurate
when evaluated in the kostReal type.
*/
#define KOST_VERYSMALL 1e-15


/*
If you defined non-default data types,
you might want to use externally defined
versions of these functions. You can do that
with the preprocessor here.

For instance, for use with the Orbiter SDK,
you might want to do:

#undef  KOSTMM_LINALG_OPERATORS_VECTOR3
#define KOSTMM_LINALG_OPERATORS_MATRIX3
#define KOSTMM_LINALG_OPERATORS_EXTRA

#define dotProduct   dotp
#define crossProduct crossp
#define abs          length
#undef  abs2
#undef  makeTranspose
*/

#define KOSTMM_LINALG_OPERATORS_VECTOR3
#define KOSTMM_LINALG_OPERATORS_MATRIX3
#define KOSTMM_LINALG_OPERATORS_EXTRA

#undef  dotProduct
#undef  crossProduct
#undef  abs
#undef  abs2
#undef  makeTranspose

#endif


