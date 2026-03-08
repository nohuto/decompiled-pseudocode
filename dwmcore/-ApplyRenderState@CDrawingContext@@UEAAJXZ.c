/*
 * XREFs of ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800762C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::ApplyRenderState(__m128 *this)
{
  return CDrawingContext::ApplyRenderStateInternal(this - 1, 0);
}
