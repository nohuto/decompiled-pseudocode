/*
 * XREFs of sub_180081344 @ 0x180081344
 * Callers:
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800B3BB4 @ 0x1800B3BB4 (sub_1800B3BB4.c)
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 *     sub_1800FCAD0 @ 0x1800FCAD0 (sub_1800FCAD0.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 *     sub_18010FFA0 @ 0x18010FFA0 (sub_18010FFA0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180081344(_DWORD *a1)
{
  __m128 v1; // xmm6
  __m128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v1 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]);
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_shuffle_ps(v2, v2, 153);
  v2.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_sqrt_ps(v4);
  v6 = _mm_cmpneq_ps((__m128)xmmword_180139B00, v4);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, (__m128)xmmword_180139B10));
  *a1 = v7.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}
