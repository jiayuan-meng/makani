/*
 * Copyright 2020 Makani Technologies LLC
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

#ifndef VIS_VIS_BUOY_H_
#define VIS_VIS_BUOY_H_

#include "common/c_math/mat3.h"
#include "control/system_types.h"
#include "sim/sim_types.h"

#ifdef __cplusplus
extern "C" {
#endif

void InitBuoy(void);

void DrawBuoy(const Vec3 *Xg, const Mat3 *dcm_g2v, bool alternate_color,
              const BuoyParams *buoy_params);

void TranslateGroundStationToBuoy(const Vec3 *Xg, const Mat3 *dcm_g2v);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // VIS_VIS_BUOY_H_
