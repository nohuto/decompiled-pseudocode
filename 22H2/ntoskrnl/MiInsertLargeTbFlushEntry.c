/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1402EDDE0
 * Callers:
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiMakePteClean @ 0x14028FBEC (MiMakePteClean.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x1402EDC7C (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPageTable @ 0x14030E4E0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiDecommitLargePoolVa @ 0x1403714C0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140378B6C (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B98EC (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B9ADC (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x14053CB20 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054F89C (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePteMappings @ 0x140553EFC (MiReleaseLargePteMappings.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // esi
  unsigned __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = (__int64)(a3 << 25) >> 16;
    result = MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
