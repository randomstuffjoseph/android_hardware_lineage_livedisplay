/*
 * Copyright (C) 2018 The LineageOS Project
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

#include "ColorBalance.h"

namespace vendor {
namespace lineage {
namespace livedisplay {
namespace V2_0 {
namespace implementation {

// Methods from ::vendor::lineage::livedisplay::V2_0::IColorBalance follow.
Return<void> ColorBalance::getColorBalanceRange(getColorBalanceRange_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<int32_t> ColorBalance::getColorBalance() {
    // TODO implement
    return int32_t {};
}

Return<bool> ColorBalance::setColorBalance(int32_t value) {
    // TODO implement
    return bool {};
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IColorBalance* HIDL_FETCH_IColorBalance(const char* /* name */) {
    //return new ColorBalance();
//}
//
}  // namespace implementation
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace lineage
}  // namespace vendor
