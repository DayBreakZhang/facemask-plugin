/*
 * Face Masks for SlOBS
 * Copyright (C) 2017 General Workings Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#pragma once
#include <inttypes.h>

const uint16_t PLUGIN_VERSION_MAJOR	= @VERSION_MAJOR@;
const uint16_t PLUGIN_VERSION_MINOR	= @VERSION_MINOR@;
const uint32_t PLUGIN_VERSION_PATCH	= @VERSION_PATCH@;
const uint64_t PLUGIN_VERSION_FULL = (((uint64_t)(PLUGIN_VERSION_MAJOR & 0xFFFF) << 48ull) | ((uint64_t)(PLUGIN_VERSION_MINOR & 0xFFFF) << 32ull) | ((uint64_t)(PLUGIN_VERSION_PATCH) & 0xFFFFFFFF));
