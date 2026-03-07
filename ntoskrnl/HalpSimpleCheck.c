__int64 __fastcall HalpSimpleCheck(const __m128i *a1)
{
  __m128i v1; // xmm1
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1

  v1 = 0LL;
  v2 = 256LL;
  do
  {
    v3 = _mm_loadu_si128(a1++);
    v4 = _mm_add_epi8(v3, v1);
    v1 = v4;
    --v2;
  }
  while ( v2 );
  v5 = _mm_add_epi8(v4, _mm_srli_si128(v4, 8));
  v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 4));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 2));
  return (unsigned int)_mm_cvtsi128_si32(_mm_add_epi8(v7, _mm_srli_si128(v7, 1)));
}
