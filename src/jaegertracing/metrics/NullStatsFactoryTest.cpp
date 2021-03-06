/*
 * Copyright (c) 2017 Uber Technologies, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "jaegertracing/metrics/Counter.h"
#include "jaegertracing/metrics/Gauge.h"
#include "jaegertracing/metrics/NullStatsFactory.h"
#include "jaegertracing/metrics/Timer.h"
#include <gtest/gtest.h>
#include <memory>

namespace jaegertracing {
namespace metrics {

TEST(NullStatsFactory, test)
{
    NullStatsFactory factory;
    factory.createGauge("")->update(1);
    factory.createTimer("")->record(1);
    factory.createCounter("")->inc(1);
}

}  // namespace metrics
}  // namespace jaegertracing
