/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI46_0_0ImageRequest.h"

#include <utility>

namespace ABI46_0_0facebook {
namespace ABI46_0_0React {

ImageRequest::ImageRequest(
    ImageSource imageSource,
    std::shared_ptr<const ImageTelemetry> telemetry)
    : imageSource_(std::move(imageSource)), telemetry_(std::move(telemetry)) {
  // Not implemented.
}

ImageRequest::ImageRequest(ImageRequest &&other) noexcept
    : imageSource_(std::move(other.imageSource_)),
      telemetry_(std::move(other.telemetry_)),
      coordinator_(std::move(other.coordinator_)) {
  // Not implemented.
}

ImageRequest::~ImageRequest() {
  // Not implemented.
}

const ImageResponseObserverCoordinator &ImageRequest::getObserverCoordinator()
    const {
  // Not implemented
  abort();
}

const std::shared_ptr<const ImageResponseObserverCoordinator>
    &ImageRequest::getSharedObserverCoordinator() const {
  // Not implemented
  abort();
}

} // namespace ABI46_0_0React
} // namespace ABI46_0_0facebook
