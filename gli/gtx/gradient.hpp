///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Image Copyright (c) 2008 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-12-19
// Updated : 2010-01-09
// Licence : This source is under MIT License
// File    : gli/gtx/gradient.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef GLI_GTX_GRADIENT_INCLUDED
#define GLI_GTX_GRADIENT_INCLUDED

#include "../gli.hpp"

namespace gli{
namespace gtx{
namespace gradient
{
	texture radial(
		glm::uvec2 const & Size, 
		glm::vec2 const & Center,
		float const & Radius,
		glm::vec2 const & Focal);

	texture linear(
		glm::uvec2 const & Size, 
		glm::vec2 const & Point0, 
		glm::vec2 const & Point1);

}//namespace gradient
}//namespace gtx
}//namespace gli

namespace gli{using namespace gtx::gradient;}

#include "gradient.inl"

#endif//GLI_GTX_GRADIENT_INCLUDED
