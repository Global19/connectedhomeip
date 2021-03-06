/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *          Defines platform-specific event types and data for the
 *          CHIP Device Layer on the ESP32.
 */

#ifndef CHIP_DEVICE_PLATFORM_EVENT_H
#define CHIP_DEVICE_PLATFORM_EVENT_H

#include <platform/CHIPDeviceEvent.h>

#include <esp_event.h>

namespace chip {
namespace DeviceLayer {

namespace DeviceEventType {

/**
 * Enumerates platform-specific event types that are visible to the application.
 */
enum
{
    kESPSystemEvent = kRange_PublicPlatformSpecific,
};

} // namespace DeviceEventType

/**
 * Represents platform-specific event information for the ESP32 platform.
 */
struct ChipDevicePlatformEvent final
{
    union
    {
        system_event_t ESPSystemEvent;
    };
};

} // namespace DeviceLayer
} // namespace chip

#endif // CHIP_DEVICE_PLATFORM_EVENT_H
