/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140210194
 * Callers:
 *     MiDecommitLargePoolVa @ 0x14020FF88 (MiDecommitLargePoolVa.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiDeleteSystemPageTable @ 0x140299BA0 (MiDeleteSystemPageTable.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x14032F6D0 (MiMakePteClean.c)
 *     MiFlushValidPteFromTb @ 0x140387768 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038B4B8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038BBC4 (MiClearSystemAccessBits.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x1406334B0 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiWritePteHighLevel @ 0x14064BD10 (MiWritePteHighLevel.c)
 *     MiDeleteLargeUserPde @ 0x14064DD80 (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, int a2, __int64 a3)
{
  int i; // esi
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    for ( i = 0; i <= a2; ++i )
    {
      a3 = a3 << 25 >> 16;
      result = MiInsertTbFlushEntry(a1, a3, 1LL);
    }
  }
  return result;
}
