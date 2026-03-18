/*
 * XREFs of KeZeroPages @ 0x140423F80
 * Callers:
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiZeroEngineMemory @ 0x1402D1280 (MiZeroEngineMemory.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiFillPhysicalPages @ 0x1403390F0 (MiFillPhysicalPages.c)
 *     MiDoGangAssignment @ 0x140389954 (MiDoGangAssignment.c)
 *     MiZeroMemory @ 0x14038B93C (MiZeroMemory.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     MiPageNotZero @ 0x14064DB1C (MiPageNotZero.c)
 *     MxMapVa @ 0x140B468AC (MxMapVa.c)
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
