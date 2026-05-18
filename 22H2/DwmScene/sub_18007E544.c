/*
 * XREFs of sub_18007E544 @ 0x18007E544
 * Callers:
 *     sub_180098830 @ 0x180098830 (sub_180098830.c)
 *     sub_1800F7AC0 @ 0x1800F7AC0 (sub_1800F7AC0.c)
 *     sub_1800FBFF0 @ 0x1800FBFF0 (sub_1800FBFF0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18007E544(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  return (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2)) & 7) != 7;
}
