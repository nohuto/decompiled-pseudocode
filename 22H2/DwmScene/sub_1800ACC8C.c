/*
 * XREFs of sub_1800ACC8C @ 0x1800ACC8C
 * Callers:
 *     sub_1800AA1F8 @ 0x1800AA1F8 (sub_1800AA1F8.c)
 *     sub_1800ABF34 @ 0x1800ABF34 (sub_1800ABF34.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800ACC8C(__m128 *a1, __int64 a2)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm3
  __m128 v6; // xmm5
  __m128 v7; // xmm4
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm5

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  v3 = a1[1];
  v4 = a1[3];
  v5 = *a1;
  v6 = a1[2];
  *(_QWORD *)a2 = 1065353216LL;
  v7 = v5;
  *(_QWORD *)(a2 + 8) = 0LL;
  v8 = _mm_shuffle_ps(v5, v3, 238);
  v9 = _mm_shuffle_ps(v6, v4, 68);
  v10 = _mm_shuffle_ps(v6, v4, 238);
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  sub_18001256C(
    (_OWORD *)a2,
    *(double *)_mm_shuffle_ps(_mm_shuffle_ps(v7, v3, 68), v9, 221).m128_u64,
    *(double *)_mm_shuffle_ps(v8, v10, 136).m128_u64,
    *(double *)_mm_shuffle_ps(v8, v10, 221).m128_u64);
  return a2;
}
