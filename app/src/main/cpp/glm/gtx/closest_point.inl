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
/// @ref gtx_closest_point
/// @file glm/gtx/closest_point.inl
/// @date 2005-12-30 / 2011-06-07
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm {
    template<typename T, precision P>
    GLM_FUNC_QUALIFIER tvec3<T, P>
    closestPointOnLine
    (
            tvec3<T, P>
    const & point,
    tvec3<T, P> const &a,
            tvec3<T, P>
    const & b
    ) {
    T LineLength = distance(a, b);
    tvec3<T, P> Vector = point - a;
    tvec3<T, P> LineDirection = (b - a) / LineLength;

    // Project Vector to LineDirection to get the distance of point from a
    T Distance = dot(Vector, LineDirection);

    if(Distance <= T(0)) return
    a;
    if(Distance >= LineLength) return
    b;
    return a +
    LineDirection *Distance;
}

template<typename T, precision P>
GLM_FUNC_QUALIFIER tvec2<T, P>
closestPointOnLine
(
        tvec2<T, P>
const & point,
tvec2<T, P> const &a,
        tvec2<T, P>
const & b
)
{
T LineLength = distance(a, b);
tvec2<T, P> Vector = point - a;
tvec2<T, P> LineDirection = (b - a) / LineLength;

// Project Vector to LineDirection to get the distance of point from a
T Distance = dot(Vector, LineDirection);

if(Distance <= T(0)) return
a;
if(Distance >= LineLength) return
b;
return a +
LineDirection *Distance;
}

}//namespace glm
