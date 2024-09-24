/*
Copyright 2017 Christopher Courtney <drashna@live.com> @drashna

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include QMK_KEYBOARD_H
#include "wrappers.h"
#include "process_records.h"


/* Define layer names */
enum userspace_layers {
    _BEPO_42 = 0,
    _AZERTY_BEPO = 1,
    _ERGO_L = 2,
    _SYMBL = 3,
    _ALTGR = 4,
    _NUMBR = 5,
    _NAV = 7,
    _E_NAV = 8,
    _B_NAV = 9,
    _MACROS = 10,
    _ADJUST = 11
};
