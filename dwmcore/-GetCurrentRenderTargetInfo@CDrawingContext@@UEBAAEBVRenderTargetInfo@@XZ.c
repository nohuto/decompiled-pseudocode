/*
 * XREFs of ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBVRenderTargetInfo@@XZ @ 0x180104C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct RenderTargetInfo *__fastcall CDrawingContext::GetCurrentRenderTargetInfo(CDrawingContext *this)
{
  return (CDrawingContext *)((char *)this + 32);
}
