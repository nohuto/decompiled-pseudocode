/*
 * XREFs of sub_18001D6D8 @ 0x18001D6D8
 * Callers:
 *     sub_180011AD0 @ 0x180011AD0 (sub_180011AD0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_UNKNOWN **__fastcall sub_18001D6D8(__m128 *a1, unsigned int *a2, double a3)
{
  _UNKNOWN **result; // rax
  __m128 v4; // xmm7
  __m128 v5; // xmm6
  __m128 v6; // xmm6
  __m128 v7; // xmm6
  __m128 v8; // xmm6
  __m128 v9; // xmm6
  __m128 v10; // xmm6
  __m128 v11; // xmm6
  __m128 v12; // xmm6
  __m128 v13; // xmm6
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0);
  v5 = _mm_mul_ps(
         _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)*a2, (__m128)a2[18]),
           _mm_unpacklo_ps((__m128)a2[9], (__m128)0x3F800000u)),
         v4);
  if ( a1 == (__m128 *)-48LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[3] = _mm_add_ps(v5, a1[3]);
  v6 = _mm_mul_ps(
         _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[19]),
           _mm_unpacklo_ps((__m128)a2[10], (__m128)0x3F800000u)),
         v4);
  if ( a1 == (__m128 *)-64LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[4] = _mm_add_ps(v6, a1[4]);
  v7 = _mm_mul_ps(
         _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)a2[2], (__m128)a2[20]),
           _mm_unpacklo_ps((__m128)a2[11], (__m128)0x3F800000u)),
         v4);
  if ( a1 == (__m128 *)-80LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[5] = _mm_add_ps(v7, a1[5]);
  v8 = _mm_mul_ps(
         _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)a2[3], (__m128)a2[21]),
           _mm_unpacklo_ps((__m128)a2[12], (__m128)0x3F800000u)),
         v4);
  if ( a1 == (__m128 *)-96LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[6] = _mm_add_ps(a1[6], v8);
  v9 = _mm_mul_ps(
         _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)a2[4], (__m128)a2[22]),
           _mm_unpacklo_ps((__m128)a2[13], (__m128)0x3F800000u)),
         v4);
  if ( a1 == (__m128 *)-112LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[7] = _mm_add_ps(a1[7], v9);
  v10 = _mm_mul_ps(
          _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[23]),
            _mm_unpacklo_ps((__m128)a2[14], (__m128)0x3F800000u)),
          v4);
  if ( a1 == (__m128 *)-128LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[8] = _mm_add_ps(v10, a1[8]);
  v11 = _mm_mul_ps(
          _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)a2[6], (__m128)a2[24]),
            _mm_unpacklo_ps((__m128)a2[15], (__m128)0x3F800000u)),
          v4);
  if ( a1 == (__m128 *)-144LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[9] = _mm_add_ps(v11, a1[9]);
  v12 = _mm_mul_ps(
          _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)a2[7], (__m128)a2[25]),
            _mm_unpacklo_ps((__m128)a2[16], (__m128)0x3F800000u)),
          v4);
  if ( a1 == (__m128 *)-160LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[10] = _mm_add_ps(a1[10], v12);
  v13 = _mm_mul_ps(
          _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)a2[8], (__m128)a2[26]),
            _mm_unpacklo_ps((__m128)a2[17], (__m128)0x3F800000u)),
          v4);
  if ( a1 == (__m128 *)-176LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[11] = _mm_add_ps(a1[11], v13);
  return result;
}
