/*
 * XREFs of ??1RenderBuffer@CHolographicInteropTexture@@QEAA@XZ @ 0x1802A70F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::RenderBuffer::~RenderBuffer(void **this)
{
  FastRegion::CRegion::FreeMemory(this + 2);
}
