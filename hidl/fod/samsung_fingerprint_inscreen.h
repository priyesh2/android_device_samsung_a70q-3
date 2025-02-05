/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SAMSUNG_FINGERPRINT_INSCREEN_H
#define SAMSUNG_FINGERPRINT_INSCREEN_H

#define FOD_SENSOR_X 447
#define FOD_SENSOR_Y 2009
#define FOD_SENSOR_SIZE 185

#define FOD_ENABLE "fod_enable,1,1,0"
#define FOD_DISABLE "fod_enable,0"
#define FOD_MASK "319"

#define FOD_SET_RECT "set_fod_rect,426,1989,654,2217"

#define FINGERPRINT_ACQUIRED_VENDOR 6
#define VENDORCODE_FINGER_DOWN 10002
#define VENDORCODE_FINGER_UP 10001
#define SEM_FINGER_STATE 22
#define SEM_PARAM_PRESSED 2
#define SEM_PARAM_RELEASED 1

#define TSP_CMD_PATH "/sys/class/sec/tsp/cmd"
#define MASK_BRIGHTNESS_PATH "/sys/class/lcd/panel/mask_brightness"


#define SEM_AOSP_FQNAME "android.hardware.biometrics.fingerprint@2.1::IBiometricsFingerprint"

#endif  // SAMSUNG_FINGERPRINT_INSCREEN_H
