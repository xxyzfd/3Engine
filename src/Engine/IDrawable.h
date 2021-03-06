/*
 * File Actor.h in project ThreeEngine
 * 
 * Copyright (C) Ricardo Rodrigues 2017 - All Rights Reserved
 */
#ifndef THREEENGINE_IDRAWABLE_H
#define THREEENGINE_IDRAWABLE_H

#include "Math/Matrix.h"

namespace ThreeEngine {

    class IDrawable {
        public:
            virtual ~IDrawable() = default;

            virtual void Init() = 0;

            virtual void Draw() = 0;
    };

} /* namespace ThreeEngine */

#endif //THREEENGINE_IDRAWABLE_H
