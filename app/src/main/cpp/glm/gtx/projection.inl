///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2015 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// Restrictions:
///		By making use of the Software for military purposes, you choose to make
///		a Bunny unhappy.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_projection
/// @file glm/gtx/projection.inl
/// @date 2005-12-21 / 2011-06-07
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm {
    template<typename vecType>
    GLM_FUNC_QUALIFIER vecType
    proj(vecType
    const & x,
    vecType const &Normal
    ) {
    return
    glm::dot(x, Normal
    ) /
    glm::dot(Normal, Normal
    ) *
    Normal;
}
}//namespace glm
