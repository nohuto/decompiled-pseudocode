/*
 * XREFs of SymCryptScsTableStore @ 0x14040954C
 * Callers:
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableStoreC @ 0x1404095CC (SymCryptScsTableStoreC.c)
 */

__m128i *__fastcall SymCryptScsTableStore(__int64 a1, int a2, const __m128i *a3)
{
  __m128i *result; // rax

  if ( *(_DWORD *)(a1 + 12) != 128 )
    return (__m128i *)SymCryptScsTableStoreC();
  result = (__m128i *)(*(_QWORD *)(a1 + 16) + (unsigned int)(a2 << 7));
  *result = _mm_loadu_si128(a3);
  result[1] = _mm_loadu_si128(a3 + 1);
  result[2] = _mm_loadu_si128(a3 + 2);
  result[3] = _mm_loadu_si128(a3 + 3);
  result[4] = _mm_loadu_si128(a3 + 4);
  result[5] = _mm_loadu_si128(a3 + 5);
  result[6] = _mm_loadu_si128(a3 + 6);
  result[7] = _mm_loadu_si128(a3 + 7);
  return result;
}
