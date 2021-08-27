// Copyright (C) 2018-2020 - DevSH Graphics Programming Sp. z O.O.
// This file is part of the "Nabla Engine".
// For conditions of distribution and use, see copyright notice in nabla.h

#ifndef _NBL_VIDEO_I_GPU_ACCELERATION_STRUCTURE_H_INCLUDED_
#define _NBL_VIDEO_I_GPU_ACCELERATION_STRUCTURE_H_INCLUDED_


#include "nbl/asset/IAccelerationStructure.h"
#include "nbl/asset/ICPUBuffer.h"
#include "nbl/asset/ICPUAccelerationStructure.h"
#include "nbl/video/IGPUBuffer.h"

namespace nbl::video
{
class IGPUAccelerationStructure : public asset::IAccelerationStructure<asset::SBufferBinding<IGPUBuffer>>, public IBackendObject
{
	using Base = asset::IAccelerationStructure<asset::SBufferBinding<IGPUBuffer>>;
	public:
		
		using DeviceAddressType = asset::SBufferBinding<IGPUBuffer>;
		using HostAddressType = asset::SBufferBinding<asset::ICPUBuffer>;

		struct BuildGeometryInfo
		{
			Base::E_TYPE	type; // TODO: Can deduce from creationParams.type?
		};

		struct SCreationParams
		{
			E_CREATE_FLAGS					flags;
			Base::E_TYPE					type;
			asset::SBufferRange<IGPUBuffer> bufferRange;
			bool operator==(const SCreationParams& rhs) const
			{
				return flags == rhs.flags && type == rhs.type && bufferRange == rhs.bufferRange;
			}
			bool operator!=(const SCreationParams& rhs) const
			{
				return !operator==(rhs);
			}
		};

		inline const auto& getCreationParameters() const
		{
			return params;
		}

		//!
		inline static bool validateCreationParameters(const SCreationParams& _params)
		{
			if(!_params.bufferRange.isValid()) {
				return false;
			}
			return true;
		}

	public:
		// const SCreationParams& getCreationParameters() const { return params; }

	protected:
		IGPUAccelerationStructure(core::smart_refctd_ptr<const ILogicalDevice>&& dev, SCreationParams&& _params) 
			: IBackendObject(std::move(dev)) 
			 , params(std::move(_params))
		{}
		virtual ~IGPUAccelerationStructure() = default;
	private:
		 SCreationParams params;
};
}

#endif