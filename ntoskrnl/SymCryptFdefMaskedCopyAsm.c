/*
 * XREFs of SymCryptFdefMaskedCopyAsm @ 0x140400260
 * Callers:
 *     SymCryptFdefIntConditionalCopy @ 0x1403FFBC8 (SymCryptFdefIntConditionalCopy.c)
 *     SymCryptFdefIntMaskedCopy @ 0x1403FFD74 (SymCryptFdefIntMaskedCopy.c)
 *     SymCryptFdefMaskedCopy @ 0x1403FFE3C (SymCryptFdefMaskedCopy.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptFdefMaskedCopyAsm(const __m128i *a1, __m128i *a2, int a3, unsigned int a4)
{
  int v4; // r8d
  __m128i v5; // xmm0
  __m128i v6; // xmm1

  v4 = 2 * a3;
  v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0);
  v6 = _mm_xor_si128((__m128i)-1LL, v5);
  do
  {
    *a2 = _mm_or_si128(_mm_and_si128(_mm_load_si128(a1), v5), _mm_and_si128(_mm_load_si128(a2), v6));
    a2[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a1 + 1), v5), _mm_and_si128(_mm_load_si128(a2 + 1), v6));
    a1 += 2;
    a2 += 2;
    --v4;
  }
  while ( v4 );
}
