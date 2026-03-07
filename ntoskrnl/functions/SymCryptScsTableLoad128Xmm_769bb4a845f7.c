__m128i *__fastcall SymCryptScsTableLoad128Xmm(__int64 a1, unsigned int a2, __m128i *a3)
{
  __m128i *v3; // rax
  __m128i v4; // xmm11
  __m128i si128; // xmm12
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  __m128i v11; // xmm8
  __m128i v12; // xmm9
  __m128i v13; // xmm10
  __m128i v14; // xmm3
  __m128i *result; // rax
  int v16; // edx
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  __m128i v19; // xmm2

  v3 = *(__m128i **)(a1 + 16);
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = _mm_cmpeq_epi32(v4, (__m128i)0LL);
  v7 = _mm_and_si128(v6, *v3);
  v8 = _mm_and_si128(v6, v3[1]);
  v9 = _mm_and_si128(v6, v3[2]);
  v10 = _mm_and_si128(v6, v3[3]);
  v11 = _mm_and_si128(v6, v3[4]);
  v12 = _mm_and_si128(v6, v3[5]);
  v13 = _mm_and_si128(v6, v3[6]);
  v14 = _mm_and_si128(v6, v3[7]);
  result = v3 + 8;
  v16 = *(_DWORD *)(a1 + 8) - 1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    do
    {
      v17 = _mm_cmpeq_epi32(v4, si128);
      si128 = _mm_add_epi32(si128, (__m128i)_xmm);
      v7 = _mm_or_si128(v7, _mm_and_si128(v17, *result));
      v8 = _mm_or_si128(v8, _mm_and_si128(v17, result[1]));
      v9 = _mm_or_si128(v9, _mm_and_si128(v17, result[2]));
      v10 = _mm_or_si128(v10, _mm_and_si128(v17, result[3]));
      v11 = _mm_or_si128(v11, _mm_and_si128(v17, result[4]));
      v12 = _mm_or_si128(v12, _mm_and_si128(v17, result[5]));
      v18 = _mm_and_si128(v17, result[6]);
      v19 = _mm_and_si128(v17, result[7]);
      v13 = _mm_or_si128(v13, v18);
      result += 8;
      v14 = _mm_or_si128(v14, v19);
      --v16;
    }
    while ( v16 );
  }
  a3[2] = v9;
  a3[3] = v10;
  a3[4] = v11;
  a3[5] = v12;
  a3[6] = v13;
  *a3 = v7;
  a3[1] = v8;
  a3[7] = v14;
  return result;
}
