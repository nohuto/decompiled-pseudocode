/*
 * XREFs of SymCryptSha256AppendBlocks_shani @ 0x1403EDAB4
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1403EDA50 (SymCryptSha256AppendBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha256AppendBlocks_shani(
        __m128i *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __m128i v9; // xmm11
  unsigned __int64 v10; // rdx
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v17; // xmm9
  __m128i v34; // xmm1
  __m128i v88; // xmm2
  __m128i v89; // xmm1
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6 = _mm_loadu_si128(a1);
  v7 = _mm_loadu_si128(a1 + 1);
  _XMM10 = _mm_shuffle_epi32(_mm_unpacklo_epi64(v6, v7), 27);
  v9 = _mm_shuffle_epi32(_mm_unpackhi_epi64(v6, v7), 27);
  if ( a3 >= 0x40 )
  {
    v10 = a3 >> 6;
    result = -64LL * (a3 >> 6);
    a3 += result;
    do
    {
      _XMM1 = _mm_shuffle_epi8(_mm_loadu_si128(a2), (__m128i)_xmm);
      _XMM2 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 1), (__m128i)_xmm);
      v13 = _mm_loadu_si128(a2 + 2);
      v14 = _mm_loadu_si128(a2 + 3);
      a2 += 4;
      _XMM3 = _mm_shuffle_epi8(v13, (__m128i)_xmm);
      _XMM4 = _mm_shuffle_epi8(v14, (__m128i)_xmm);
      v17 = _XMM10;
      __asm { sha256msg1 xmm1, xmm2 }
      _XMM8 = v9;
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      _XMM5 = _mm_add_epi32(_mm_alignr_epi8(_XMM4, _XMM3, 4), _XMM1);
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg2 xmm5, xmm4 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm
      {
        sha256msg1 xmm2, xmm3
        sha256msg1 xmm3, xmm4
      }
      v34 = _mm_alignr_epi8(_XMM5, _XMM4, 4);
      __asm { sha256msg1 xmm4, xmm5 }
      _XMM1 = _mm_add_epi32(v34, _XMM2);
      __asm { sha256msg2 xmm1, xmm5 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      _XMM2 = _mm_add_epi32(_mm_alignr_epi8(_XMM1, _XMM5, 4), _XMM3);
      __asm { sha256msg2 xmm2, xmm1 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      _XMM3 = _mm_add_epi32(_mm_alignr_epi8(_XMM2, _XMM1, 4), _XMM4);
      __asm { sha256msg2 xmm3, xmm2 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm5, xmm1 }
      _XMM4 = _mm_add_epi32(_mm_alignr_epi8(_XMM3, _XMM2, 4), _XMM5);
      __asm { sha256msg2 xmm4, xmm3 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm1, xmm2 }
      _XMM5 = _mm_add_epi32(_mm_alignr_epi8(_XMM4, _XMM3, 4), _XMM1);
      __asm
      {
        sha256msg1 xmm2, xmm3
        sha256msg2 xmm5, xmm4
      }
      _XMM6 = _mm_add_epi32(_mm_alignr_epi8(_XMM5, _XMM4, 4), _XMM2);
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg2 xmm6, xmm5 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm3, xmm4 }
      _XMM7 = _mm_add_epi32(_mm_alignr_epi8(_XMM6, _XMM5, 4), _XMM3);
      __asm { sha256msg2 xmm7, xmm6 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm4, xmm5 }
      _XMM3 = _mm_add_epi32(_mm_alignr_epi8(_XMM7, _XMM6, 4), _XMM4);
      __asm { sha256msg2 xmm3, xmm7 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm5, xmm6 }
      _XMM2 = _mm_add_epi32(_mm_alignr_epi8(_XMM3, _XMM7, 4), _XMM5);
      __asm { sha256msg2 xmm2, xmm3 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm6, xmm7 }
      _XMM1 = _mm_add_epi32(_mm_alignr_epi8(_XMM2, _XMM3, 4), _XMM6);
      __asm { sha256msg2 xmm1, xmm2 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      __asm { sha256msg1 xmm7, xmm3 }
      _XMM0 = _mm_add_epi32(_mm_alignr_epi8(_XMM1, _XMM2, 4), _XMM7);
      __asm { sha256msg2 xmm0, xmm1 }
      __asm { sha256rnds2 xmm8, xmm10, xmm0 }
      v9 = _mm_add_epi32(v9, _XMM8);
      __asm { sha256rnds2 xmm10, xmm8, xmm0 }
      _XMM10 = _mm_add_epi32(_XMM10, v17);
      --v10;
    }
    while ( v10 );
  }
  v88 = _mm_shuffle_epi32(_XMM10, 27);
  v89 = _mm_shuffle_epi32(v9, 27);
  *a1 = _mm_unpacklo_epi64(v88, v89);
  a1[1] = _mm_unpackhi_epi64(v88, v89);
  *a4 = a3;
  return result;
}
