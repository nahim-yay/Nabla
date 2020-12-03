// Copyright (C) 2019 - DevSH Graphics Programming Sp. z O.O.
// This file is part of the "Nabla Engine" and was originally part of the "Irrlicht Engine"
// For conditions of distribution and use, see copyright notice in nabla.h
// See the original file in irrlicht source for authors

#ifndef __NBL_E_SCENE_NODE_TYPES_H_INCLUDED__
#define __NBL_E_SCENE_NODE_TYPES_H_INCLUDED__

#include "nbl/core/Types.h"

namespace nbl
{
namespace scene
{

	//! An enumeration for all types of built-in scene nodes
	/** A scene node type is represented by a four character code
	such as 'cube' or 'mesh' instead of simple numbers, to avoid
	name clashes with external scene nodes.*/
	enum ESCENE_NODE_TYPE
	{
		//! of type CSceneManager (note that ISceneManager is not(!) an ISceneNode)
		ESNT_SCENE_MANAGER	= MAKE_NBL_ID('s','m','n','g'),

		//! Sky Box Scene Node
		ESNT_SKY_BOX        = MAKE_NBL_ID('s','k','y','_'),

		//! Sky Dome Scene Node
		ESNT_SKY_DOME       = MAKE_NBL_ID('s','k','y','d'),

		//! Mesh Scene Node
		ESNT_MESH           = MAKE_NBL_ID('m','e','s','h'),
		ESNT_MESH_INSTANCED = MAKE_NBL_ID('m','b','f','I'),

		//! Dummy Transformation Scene Node
		ESNT_DUMMY_TRANSFORMATION = MAKE_NBL_ID('d','m','m','y'),

		//! Camera Scene Node
		ESNT_CAMERA         = MAKE_NBL_ID('c','a','m','_'),

		//! Animated Mesh Scene Node
		ESNT_ANIMATED_MESH  = MAKE_NBL_ID('a','m','s','h'),
		ESNT_ANIMATED_MESH_INSTANCED = MAKE_NBL_ID('a','m','s','I'),

		//! Skinned Mesh Scene Node
		ESNT_SKINNED_MESH  = MAKE_NBL_ID('s','m','s','h'),
		ESNT_SKINNED_MESH_INSTANCED = MAKE_NBL_ID('s','m','s','I'),

		//! Maya Camera Scene Node
		/** Legacy, for loading version <= 1.4.x .irr files */
		ESNT_CAMERA_MAYA    = MAKE_NBL_ID('c','a','m','M'),

		//! First Person Shooter Camera
		/** Legacy, for loading version <= 1.4.x .irr files */
		ESNT_CAMERA_FPS     = MAKE_NBL_ID('c','a','m','F'),

		//! Unknown scene node
		ESNT_UNKNOWN        = MAKE_NBL_ID('u','n','k','n'),

		//! Will match with any scene node when checking types
		ESNT_ANY            = MAKE_NBL_ID('a','n','y','_')
	};



} // end namespace scene
} // end namespace nbl


#endif

