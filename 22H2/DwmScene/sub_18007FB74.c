/*
 * XREFs of sub_18007FB74 @ 0x18007FB74
 * Callers:
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_180111670 @ 0x180111670 (sub_180111670.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_18007FB74(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm6
  __m128 v3; // xmm3
  __m128 v4; // xmm2

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_mul_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2);
  v4 = _mm_shuffle_ps(v3, v3, 153);
  v3.m128_f32[0] = (float)(v3.m128_f32[0] + v4.m128_f32[0]) + _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  return v3;
}
