/*
 * XREFs of MiFreeLargePageMemory @ 0x14027ECD4
 * Callers:
 *     MiFreeMdlPageRun @ 0x140280378 (MiFreeMdlPageRun.c)
 *     MiFreeContiguousPages @ 0x1402E91B8 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x1403714C0 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x140552B10 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x14055E3D8 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MiReadyLargePageToFree @ 0x1402AA3C0 (MiReadyLargePageToFree.c)
 *     MiSetPfnPageState @ 0x1402AA590 (MiSetPfnPageState.c)
 *     MiUnlockPage @ 0x140306A9C (MiUnlockPage.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AC2B0 (MiSetFreeZeroPfnCold.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F5800 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinishLargePageFree @ 0x1403F7084 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x1403F7330 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F73D8 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  BOOL v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  char v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1, a2);
  v6 = MiLargePageSizes[v3];
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = (a3 & 1) == 0;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported((unsigned int)v3) )
  {
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
    MiLockPageInline(48 * a1 - 0x58000000000LL, v9, v10);
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, (unsigned int)(v8 + 5), v11, *(_BYTE *)(v7 + 34) & 7);
    MiSetFreeZeroPfnCold(v12, (unsigned int)(v8 + 1));
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, (unsigned int)v13, v14, v13);
    LOBYTE(v16) = v15;
    MiUnlockPage(v17, v16);
  }
  v18 = 512;
  v19 = a1;
  if ( (unsigned int)v3 > 1 )
    v19 = a1 & 0xFFFFFE00;
  else
    v18 = v6;
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL)), v19, v18, 0, 0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x58000000000LL, (a3 & 1) == 0);
  else
    return 0LL;
}
