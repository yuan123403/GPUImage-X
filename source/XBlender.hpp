//
// Created by 林炳河 on 2019-09-25.
//

#ifndef GPUIMAGE_X_XBLENDER_HPP
#define GPUIMAGE_X_XBLENDER_HPP

#include "XFrameBuffer.hpp"
#include "XTwoInputFilter.hpp"

NS_X_IMAGE_BEGIN
class XBlender {
public:
    static void blend(XFrameBuffer *bottom, XFrameBuffer *top);

private:
    static XTwoInputFilter *sTwoInputFilter;
};
NS_X_IMAGE_END

#endif //GPUIMAGE_X_XBLENDER_HPP
