/*
 * XREFs of KeZeroPages @ 0x14041BBF0
 * Callers:
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiFillPhysicalPages @ 0x1402CE820 (MiFillPhysicalPages.c)
 *     MiDoGangAssignment @ 0x140386D14 (MiDoGangAssignment.c)
 *     MiZeroMemory @ 0x140389E0C (MiZeroMemory.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     MiPageNotZero @ 0x14064B500 (MiPageNotZero.c)
 *     MxMapVa @ 0x140B3819C (MxMapVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
