/*
 * EEZ PSU Firmware
 * Copyright (C) 2015 Envox d.o.o.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "psu.h"

namespace eez {
namespace psu {
namespace gui {

uint8_t document[1057] = {
    0x0F, 0x06, 0x00, 0x05, 0xC9, 0x00, 0x02, 0x14, 0x00, 0xBA, 0x55, 0xE0, 0xFF, 0x9A, 0xD6, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0xBA, 0x55, 0xE0, 0xFF, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x12, 0x00, 0xBA, 0x55, 0xE0, 0xFF, 0x9A, 0xD6, 0x0C, 0x00, 0x00, 0x00, 0x03, 0x12, 0x00,
    0xBA, 0x55, 0x00, 0xF8, 0x9A, 0xD6, 0x0C, 0x00, 0x00, 0x00, 0x02, 0x12, 0x00, 0xBA, 0x55, 0xE0,
    0xFF, 0x9A, 0xD6, 0x0C, 0x00, 0x00, 0x00, 0x02, 0x12, 0x00, 0xBA, 0x55, 0x00, 0xF8, 0x9A, 0xD6,
    0x0C, 0x00, 0x00, 0x00, 0x03, 0x14, 0x00, 0xBA, 0x55, 0xE0, 0xFF, 0x9A, 0xD6, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x14, 0x00, 0xBA, 0x55, 0xE0, 0xFF, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10,
    0x00, 0xBA, 0x55, 0x10, 0x84, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0xBA, 0x55,
    0x00, 0x04, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0xBA, 0x55, 0x00, 0xF8, 0x9A,
    0xD6, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0xBA, 0x55, 0xFF, 0xFF, 0x9A, 0xD6, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x14, 0x00, 0x9A, 0xD6, 0x00, 0x00, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x14, 0x00, 0xBA, 0x55, 0xE0, 0xFF, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x9A,
    0xD6, 0x00, 0x00, 0x9A, 0xD6, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x78, 0xA0,
    0x06, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x78, 0xA0, 0x06, 0x00, 0x03, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x78, 0xA0, 0x06, 0x00, 0x06, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x78,
    0xA0, 0x06, 0x00, 0x09, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x78, 0xA0, 0x06, 0x00, 0x0C, 0x01,
    0x05, 0x0F, 0x01, 0x06, 0x46, 0x01, 0x04, 0x88, 0x01, 0x04, 0xB4, 0x01, 0x04, 0xE0, 0x01, 0x02,
    0x01, 0x00, 0x00, 0x00, 0x78, 0xA0, 0x06, 0x00, 0x0C, 0x02, 0x05, 0x00, 0x00, 0x00, 0x8A, 0x19,
    0x16, 0x95, 0x00, 0x0E, 0x02, 0x05, 0x00, 0x00, 0x19, 0x8A, 0x19, 0x16, 0x95, 0x00, 0x10, 0x02,
    0x05, 0x00, 0x00, 0x32, 0x8A, 0x23, 0x16, 0x95, 0x00, 0x12, 0x02, 0x05, 0x00, 0x07, 0x55, 0x8A,
    0x23, 0x16, 0x95, 0x00, 0x14, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x16, 0x8A, 0x06, 0x00, 0x00,
    0x00, 0x02, 0x01, 0x00, 0x1E, 0x00, 0x5A, 0xA0, 0x06, 0x00, 0x16, 0x02, 0x05, 0x00, 0x02, 0x00,
    0x8A, 0x16, 0x16, 0xAF, 0x00, 0x18, 0x02, 0x05, 0x00, 0x03, 0x16, 0x8A, 0x16, 0x16, 0xA2, 0x00,
    0x1A, 0x02, 0x05, 0x00, 0x04, 0x2C, 0x8A, 0x16, 0x16, 0xA2, 0x00, 0x1C, 0x02, 0x05, 0x00, 0x05,
    0x42, 0x8A, 0x36, 0x16, 0xBC, 0x00, 0x1E, 0x02, 0x05, 0x00, 0x02, 0x00, 0x8A, 0x16, 0x16, 0xA2,
    0x00, 0x20, 0x02, 0x05, 0x00, 0x03, 0x16, 0x8A, 0x16, 0x16, 0xAF, 0x00, 0x22, 0x02, 0x05, 0x00,
    0x04, 0x2C, 0x8A, 0x16, 0x16, 0xA2, 0x00, 0x24, 0x02, 0x05, 0x00, 0x05, 0x42, 0x8A, 0x36, 0x16,
    0xBC, 0x00, 0x26, 0x02, 0x05, 0x00, 0x02, 0x00, 0x8A, 0x16, 0x16, 0xA2, 0x00, 0x28, 0x02, 0x05,
    0x00, 0x03, 0x16, 0x8A, 0x16, 0x16, 0xA2, 0x00, 0x2A, 0x02, 0x05, 0x00, 0x04, 0x2C, 0x8A, 0x16,
    0x16, 0xAF, 0x00, 0x2C, 0x02, 0x05, 0x00, 0x05, 0x42, 0x8A, 0x36, 0x16, 0xBC, 0x00, 0x2E, 0x02,
    0x04, 0x0C, 0x00, 0x00, 0x00, 0x78, 0x50, 0x95, 0x00, 0x00, 0x00, 0x05, 0x00, 0x08, 0x0A, 0x6E,
    0x18, 0x14, 0x95, 0x00, 0x30, 0x02, 0x05, 0x00, 0x09, 0x28, 0x6E, 0x19, 0x14, 0x95, 0x00, 0x32,
    0x02, 0x05, 0x00, 0x0A, 0x43, 0x6E, 0x2C, 0x14, 0x95, 0x00, 0x34, 0x02, 0x36, 0x02, 0x41, 0x02,
    0x46, 0x02, 0x4A, 0x02, 0x51, 0x02, 0x56, 0x02, 0x61, 0x02, 0x63, 0x02, 0x65, 0x02, 0x67, 0x02,
    0x6C, 0x02, 0x6E, 0x02, 0x70, 0x02, 0x72, 0x02, 0x77, 0x02, 0x79, 0x02, 0x7B, 0x02, 0x7D, 0x02,
    0x82, 0x02, 0x86, 0x02, 0x89, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x78, 0x45, 0x06, 0x00, 0x90,
    0x02, 0x4D, 0x61, 0x69, 0x6E, 0x00, 0x4F, 0x66, 0x66, 0x00, 0x52, 0x65, 0x6D, 0x6F, 0x74, 0x65,
    0x00, 0x43, 0x61, 0x6C, 0x2E, 0x00, 0x01, 0x00, 0x00, 0x1E, 0x00, 0x5A, 0x45, 0x06, 0x00, 0x93,
    0x02, 0x53, 0x00, 0x4D, 0x00, 0x4B, 0x00, 0x45, 0x78, 0x69, 0x74, 0x00, 0x53, 0x00, 0x4D, 0x00,
    0x4B, 0x00, 0x45, 0x78, 0x69, 0x74, 0x00, 0x53, 0x00, 0x4D, 0x00, 0x4B, 0x00, 0x45, 0x78, 0x69,
    0x74, 0x00, 0x59, 0x65, 0x73, 0x00, 0x4E, 0x6F, 0x00, 0x43, 0x61, 0x6E, 0x63, 0x65, 0x6C, 0x00,
    0x08, 0x96, 0x02, 0x08, 0xEE, 0x02, 0x07, 0x07, 0x00, 0x00, 0x00, 0x16, 0x0D, 0x6E, 0x00, 0x46,
    0x03, 0x07, 0x08, 0x00, 0x16, 0x00, 0x16, 0x0D, 0x6E, 0x00, 0x4C, 0x03, 0x07, 0x09, 0x00, 0x2C,
    0x00, 0x16, 0x0D, 0x6E, 0x00, 0x52, 0x03, 0x07, 0x0A, 0x00, 0x42, 0x00, 0x16, 0x0D, 0x6E, 0x00,
    0x58, 0x03, 0x06, 0x0B, 0x00, 0x58, 0x00, 0x20, 0x0D, 0x06, 0x00, 0x5E, 0x03, 0x03, 0x02, 0x06,
    0x00, 0x0D, 0x78, 0x24, 0x06, 0x00, 0x66, 0x03, 0x04, 0x05, 0x01, 0x00, 0x31, 0x3C, 0x14, 0x06,
    0x00, 0x00, 0x00, 0x04, 0x06, 0x01, 0x3C, 0x31, 0x3C, 0x14, 0x06, 0x00, 0x00, 0x00, 0x07, 0x07,
    0x00, 0x1E, 0x00, 0x10, 0x0D, 0x6E, 0x00, 0x69, 0x03, 0x07, 0x08, 0x00, 0x2E, 0x00, 0x10, 0x0D,
    0x6E, 0x00, 0x6F, 0x03, 0x07, 0x09, 0x00, 0x3E, 0x00, 0x10, 0x0D, 0x6E, 0x00, 0x75, 0x03, 0x07,
    0x0A, 0x00, 0x4E, 0x00, 0x10, 0x0D, 0x6E, 0x00, 0x7B, 0x03, 0x06, 0x0B, 0x00, 0x5E, 0x00, 0x1A,
    0x0D, 0x06, 0x00, 0x81, 0x03, 0x03, 0x02, 0x00, 0x1E, 0x0D, 0x5A, 0x24, 0x06, 0x00, 0x89, 0x03,
    0x04, 0x05, 0x00, 0x1E, 0x31, 0x2D, 0x14, 0x13, 0x00, 0x00, 0x00, 0x04, 0x06, 0x00, 0x4B, 0x31,
    0x2D, 0x14, 0x13, 0x00, 0x00, 0x00, 0x7B, 0x00, 0x88, 0x00, 0x8C, 0x03, 0x7B, 0x00, 0x88, 0x00,
    0x90, 0x03, 0x7B, 0x00, 0x88, 0x00, 0x94, 0x03, 0x7B, 0x00, 0x88, 0x00, 0x98, 0x03, 0x7B, 0x00,
    0x9C, 0x03, 0x6E, 0x00, 0xA2, 0x03, 0x02, 0xA9, 0x03, 0x7B, 0x00, 0x88, 0x00, 0xBF, 0x03, 0x7B,
    0x00, 0x88, 0x00, 0xC1, 0x03, 0x7B, 0x00, 0x88, 0x00, 0xC3, 0x03, 0x7B, 0x00, 0x88, 0x00, 0xC5,
    0x03, 0x7B, 0x00, 0xC7, 0x03, 0x6E, 0x00, 0xCA, 0x03, 0x02, 0xCD, 0x03, 0x4F, 0x56, 0x50, 0x00,
    0x4F, 0x43, 0x50, 0x00, 0x4F, 0x50, 0x50, 0x00, 0x4F, 0x54, 0x50, 0x00, 0x44, 0x50, 0x20, 0x6F,
    0x6E, 0x00, 0x44, 0x50, 0x20, 0x6F, 0x66, 0x66, 0x00, 0x05, 0x00, 0x06, 0x00, 0x0D, 0x78, 0x24,
    0x54, 0x00, 0xE3, 0x03, 0x03, 0x03, 0x06, 0x00, 0x0D, 0x78, 0x24, 0x06, 0x00, 0xE5, 0x03, 0x56,
    0x00, 0x43, 0x00, 0x50, 0x00, 0x54, 0x00, 0x44, 0x50, 0x00, 0x44, 0x50, 0x00, 0x05, 0x00, 0x00,
    0x1E, 0x0D, 0x5A, 0x24, 0x61, 0x00, 0xE8, 0x03, 0x03, 0x03, 0x00, 0x1E, 0x0D, 0x5A, 0x24, 0x06,
    0x00, 0xEA, 0x03, 0xED, 0x03, 0x02, 0xF1, 0x03, 0x07, 0x04, 0x02, 0x0B, 0x04, 0x4F, 0x46, 0x46,
    0x00, 0x04, 0x04, 0x06, 0x00, 0x0D, 0x78, 0x24, 0x20, 0x00, 0x00, 0x00, 0x04, 0x04, 0x06, 0x00,
    0x0D, 0x78, 0x24, 0x2D, 0x00, 0x00, 0x00, 0x4F, 0x46, 0x46, 0x00, 0x04, 0x04, 0x00, 0x1E, 0x0D,
    0x5A, 0x24, 0x3A, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x1E, 0x0D, 0x5A, 0x24, 0x47, 0x00, 0x00,
    0x00
};

}
}
} // namespace eez::psu::gui
