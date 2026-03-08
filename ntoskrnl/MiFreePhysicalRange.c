/*
 * XREFs of MiFreePhysicalRange @ 0x140648248
 * Callers:
 *     MiFreeAwePagesFromMdl @ 0x140647764 (MiFreeAwePagesFromMdl.c)
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalPageChain @ 0x140647BC4 (MiFreePhysicalPageChain.c)
 * Callees:
 *     MmFreeMemoryRanges @ 0x140A2B7D0 (MmFreeMemoryRanges.c)
 */

__int64 __fastcall MiFreePhysicalRange(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-48h] BYREF
  __int128 v4; // [rsp+24h] [rbp-44h]
  int v5; // [rsp+34h] [rbp-34h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int64 *v9; // [rsp+50h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  v4 = 0LL;
  v7 = 0LL;
  v3 = 1;
  v10 = a2 << 12;
  LODWORD(v4) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
  v8 = 1LL;
  v9 = &v10;
  v6 = 0x40000000LL;
  return MmFreeMemoryRanges(&v3);
}
