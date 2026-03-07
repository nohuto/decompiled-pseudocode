unsigned __int64 __fastcall KeCheckForZeroPage(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __m128 v7; // xmm0

  v1 = -4096LL;
  v2 = a1 + 4096;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    v3 = _mm_or_si128(
           _mm_or_si128(v3, _mm_load_si128((const __m128i *)(v2 + v1))),
           _mm_load_si128((const __m128i *)(v2 + v1 + 64)));
    v4 = _mm_or_si128(
           _mm_or_si128(v4, _mm_load_si128((const __m128i *)(v2 + v1 + 16))),
           _mm_load_si128((const __m128i *)(v2 + v1 + 80)));
    v5 = _mm_or_si128(
           _mm_or_si128(v5, _mm_load_si128((const __m128i *)(v2 + v1 + 32))),
           _mm_load_si128((const __m128i *)(v2 + v1 + 96)));
    v6 = _mm_or_si128(
           _mm_or_si128(v6, _mm_load_si128((const __m128i *)(v2 + v1 + 48))),
           _mm_load_si128((const __m128i *)(v2 + v1 + 112)));
    v1 += 128LL;
  }
  while ( v1 );
  v7 = (__m128)_mm_or_si128(_mm_or_si128(v3, v4), _mm_or_si128(v5, v6));
  return _mm_movehl_ps(v7, v7).m128_u64[0] | v7.m128_u64[0];
}
