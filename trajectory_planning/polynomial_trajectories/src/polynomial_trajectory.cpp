#include "polynomial_trajectories/polynomial_trajectory.h"

namespace polynomial_trajectories {

PolynomialTrajectory::PolynomialTrajectory()
    : trajectory_type(TrajectoryType::UNDEFINED),
      coeff(),
      T(ros::Duration(0.0)),
      start_state(),
      end_state(),
      number_of_segments(0),
      segment_times(),
      optimization_cost(0.0) {}

PolynomialTrajectory::~PolynomialTrajectory() {}


PolynomialTrajectory::PolynomialTrajectory(const PolynomialTrajectory& other)
:
trajectory_type(other.trajectory_type),
coeff(other.coeff),
T(other.T),
start_state(other.start_state),
end_state(other.end_state),
number_of_segments(other.number_of_segments),
segment_times(other.segment_times),
optimization_cost(other.optimization_cost)
{}

}  // namespace polynomial_trajectories
