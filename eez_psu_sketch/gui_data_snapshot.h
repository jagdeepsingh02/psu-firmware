/*
* EEZ PSU Firmware
* Copyright (C) 2015-present, Envox d.o.o.
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

#pragma once

#include "event_queue.h"
#include "gui_data.h"
#include "gui_keypad.h"
#include "gui_edit_mode_snapshot.h"

namespace eez {
namespace psu {
namespace gui {
namespace data {

struct ChannelSnapshotFlags {
    unsigned status : 2;
    unsigned state : 1;
    unsigned mode : 1;
	unsigned lrip : 1;
    unsigned ovp : 2;
    unsigned ocp : 2;
    unsigned opp : 2;
    unsigned otp_ch : 2;
    unsigned dp : 2;
	unsigned cal_enabled: 1;
	unsigned temperatureStatus: 2;
};

struct ChannelSnapshot {
    Value mon_value;
    float u_set;
	float u_mon;
    float i_set;
	float i_mon;
    ChannelSnapshotFlags flags;
	float temperature;
	uint32_t onTimeTotal;
	uint32_t onTimeLast;
};

struct SnapshotFlags {
    unsigned otp : 2;
	unsigned mainTemperatureStatus: 2;
	unsigned fanStatus: 2;
	unsigned setPageDirty: 1;
	unsigned switch1: 1;
	unsigned switch2: 1;
};

struct Snapshot {
    ChannelSnapshot channelSnapshots[CH_MAX];
	keypad::Snapshot keypadSnapshot;
    edit_mode::Snapshot editModeSnapshot;
    Value alertMessage;
	SnapshotFlags flags;
	event_queue::Event lastEvent;
	event_queue::Event events[event_queue::EVENTS_PER_PAGE];
	Value eventQueuePageInfo;
	uint32_t onTimeTotal;
	uint32_t onTimeLast;
	float mainTemperature;
	float fanSpeed;

    unsigned long lastSnapshotTime;

    void takeSnapshot();

    Value get(const Cursor &cursor, uint8_t id);
    bool isBlinking(const Cursor &cursor, uint8_t id);
};

extern Snapshot currentSnapshot;
extern Snapshot previousSnapshot;

}
}
}
} // namespace eez::psu::ui::data
