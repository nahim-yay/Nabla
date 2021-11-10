#ifndef __NBL_VIDEO_C_VULKAN_RENDERPASS_INDEPENDENT_PIPELINE_H_INCLUDED__
#define __NBL_VIDEO_C_VULKAN_RENDERPASS_INDEPENDENT_PIPELINE_H_INCLUDED__

#include "nbl/video/IGPURenderpassIndependentPipeline.h"

namespace nbl::video
{

class CVulkanRenderpassIndependentPipeline : public IGPURenderpassIndependentPipeline
{
public:
    CVulkanRenderpassIndependentPipeline(
		core::smart_refctd_ptr<const ILogicalDevice>&& dev,
		core::smart_refctd_ptr<IGPUPipelineLayout>&& layout,
		IGPUSpecializedShader* const* shadersBegin, IGPUSpecializedShader* const* shadersEnd,
		const asset::SVertexInputParams& vertexInputParams,
		const asset::SBlendParams& blendParams,
		const asset::SPrimitiveAssemblyParams& primAsmParams,
		const asset::SRasterizationParams& rasterParams)
    : IGPURenderpassIndependentPipeline(std::move(dev), std::move(layout),
		shadersBegin, shadersEnd, vertexInputParams, blendParams, primAsmParams, rasterParams)
    {}
};

}

#endif