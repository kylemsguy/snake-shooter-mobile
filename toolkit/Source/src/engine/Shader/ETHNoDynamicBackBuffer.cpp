/*--------------------------------------------------------------------------------------
 Ethanon Engine (C) Copyright 2008-2013 Andre Santee
 http://ethanonengine.com/

	Permission is hereby granted, free of charge, to any person obtaining a copy of this
	software and associated documentation files (the "Software"), to deal in the
	Software without restriction, including without limitation the rights to use, copy,
	modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
	and to permit persons to whom the Software is furnished to do so, subject to the
	following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
	INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
	PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
	CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
	OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
--------------------------------------------------------------------------------------*/

#include "ETHNoDynamicBackBuffer.h"

ETHNoDynamicBackBuffer::ETHNoDynamicBackBuffer(const gs2d::VideoPtr& video, const gs2d::math::Vector2& size) :
	m_video(video)
{
	GS2D_UNUSED_ARGUMENT(size);
}

void ETHNoDynamicBackBuffer::BeginRendering()
{
	gs2d::VideoPtr video = m_video.lock();
	if (video)
		video->BeginSpriteScene();
}

void ETHNoDynamicBackBuffer::EndRendering()
{
	gs2d::VideoPtr video = m_video.lock();
	if (video)
		video->EndSpriteScene();
}

void ETHNoDynamicBackBuffer::Present()
{
}

bool ETHNoDynamicBackBuffer::MatchesScreenSize() const
{
	return true;
}
