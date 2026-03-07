_OWORD *__fastcall CTreeEffectLayer::GetLayerPointAndSize(_OWORD *a1, CEffectBrush *a2, _OWORD *a3, __m128 *a4)
{
  *a1 = *a3;
  if ( a2 && CEffectBrush::HasBlurEffectNode(a2) )
    *a1 = _mm_cvttps_epi32(*a4);
  return a1;
}
