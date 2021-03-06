//
// $Id: PathData.h,v 1.3 2003/05/07 00:03:40 happybadger Exp $

// Copyright (c) 2003, WhichBot Project
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the WhichBot Project nor the names of its
//       contributors may be used to endorse or promote products derived from
//       this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// Original Pathematics algorithm by Alex Champandard (http://www.base-sixteen.com/)
// This implementation by Mike Cooper.

#ifndef __PATHEMATICS_ENGINE_PATHDATA
#define __PATHEMATICS_ENGINE_PATHDATA

#include "PathematicsTypedefs.h"
#include "model/Digraph.h"
#include "model/Node.h"
#include "model/Vector3D.h"

namespace wb_pathematics
{

const tDistanceEstimate MAX_DISTANCE_ESTIMATE = 1000000;

class PathData
{
public:

    PathData();

    PathData(tDistanceEstimate distance);

    inline tDistanceEstimate getDistance() const { return _distance; }

    inline void setDistance(tDistanceEstimate newDistance) { _distance = newDistance; }

    inline tReward getReward() const { return _reward; }

    inline tReward getCumulativeReward() const { return _cumulativeReward; }

    inline void setReward(tReward newReward) { _reward = newReward; }

	inline void addReward(tReward reward) { _reward += reward; }

    inline void setCumulativeReward(tReward newCumulativeReward) { _cumulativeReward = newCumulativeReward; }

protected:

    tDistanceEstimate _distance;
    tReward _reward;
    tReward _cumulativeReward;
};

}

#endif // __PATHEMATICS_MODEL_PATHDATA
