#pragma once

//external
#include "camera_metadata.pb.h"

namespace perc {

struct MarkerID {
  enum class Type {
    ArUcoMarker,
    AprilTag,
    ChessBoard,
    ChArUcoBoard,
    ArUcoBoard,
    TargetBoard
  };

  Type type;
  int id;
};

struct SingleMarkerDetectionResult {
  MarkerID id; //MarkerID
  std::vector<cv::Point2f> corners;
  cv::Vec3d rvec;
  cv::Vec3d tvec;
};

}  // namespace perc