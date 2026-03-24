/*
 * XREFs of KeZeroPages @ 0x140402430
 * Callers:
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1403579D0 (MiFillPhysicalPages.c)
 *     MiZeroMemory @ 0x140357B44 (MiZeroMemory.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroPageCalibrateIsr @ 0x1403BBDD0 (MiZeroPageCalibrateIsr.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x14054F0B0 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x1405600B0 (MiDoGangAssignment.c)
 *     MxMapVa @ 0x140A43F9C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
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
