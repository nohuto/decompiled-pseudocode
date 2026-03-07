__int64 __fastcall CDrawingContext::ApplyRenderState(__m128 *this)
{
  return CDrawingContext::ApplyRenderStateInternal(this - 1, 0);
}
