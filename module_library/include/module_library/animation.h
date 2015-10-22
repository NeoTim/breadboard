// Copyright 2015 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FPL_BREADBOARD_MODULE_LIBRARY_ANIMATION_H_
#define FPL_BREADBOARD_MODULE_LIBRARY_ANIMATION_H_

#include "breadboard/event_system.h"
#include "component_library/animation.h"
#include "component_library/graph.h"
#include "component_library/transform.h"
#include "module_library/entity.h"

namespace fpl {
namespace module_library {

void InitializeAnimationModule(
    breadboard::EventSystem* event_system,
    component_library::GraphComponent* graph_component,
    component_library::AnimationComponent* anim_component,
    component_library::TransformComponent* transform_component);

}  // namespace module_library
}  // namespace fpl

#endif  // FPL_BREADBOARD_MODULE_LIBRARY_ANIMATION_H_