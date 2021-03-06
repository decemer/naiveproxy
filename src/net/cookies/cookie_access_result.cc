// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/cookies/cookie_access_result.h"

namespace net {

CookieAccessResult::CookieAccessResult() = default;

CookieAccessResult::CookieAccessResult(
    CookieEffectiveSameSite effective_same_site,
    CookieInclusionStatus status)
    : effective_same_site(effective_same_site), status(status) {}

CookieAccessResult::CookieAccessResult(const CookieAccessResult&) = default;

CookieAccessResult& CookieAccessResult::operator=(
    const CookieAccessResult& cookie_access_result) = default;

CookieAccessResult::CookieAccessResult(CookieAccessResult&&) = default;

CookieAccessResult::~CookieAccessResult() = default;

}  // namespace net
