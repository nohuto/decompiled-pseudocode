/*
 * XREFs of MiFreeLargePageMemory @ 0x1403505C0
 * Callers:
 *     MiDecommitLargePoolVa @ 0x14020FF88 (MiDecommitLargePoolVa.c)
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x14027AF50 (MiFreeMdlPageRun.c)
 *     MiFreeSlabEntry @ 0x1403B33B0 (MiFreeSlabEntry.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x1402DD100 (MiColdPageSizeSupported.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiFinishLargePageFree @ 0x1403506BC (MiFinishLargePageFree.c)
 *     MiReadyLargePageToFree @ 0x140350860 (MiReadyLargePageToFree.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiFreeLargePageMemory(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r12
  unsigned int v7; // r15d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1);
  v6 = MiLargePageSizes[v3];
  v7 = 1;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported(v3) )
  {
    v7 = 0;
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
  }
  v8 = 512LL;
  v9 = a1;
  if ( (unsigned int)v3 > 1 )
    v9 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  else
    v8 = v6;
  MiUpdateLargePageBitMap(
    *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
    v9,
    v8,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x220000000000LL, (a3 & 1) == 0, v7, (a3 >> 3) & 1);
  else
    return 0LL;
}
