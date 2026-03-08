/*
 * XREFs of MiInitializeLargePfnList @ 0x14035059C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiGetFastLargePages @ 0x14034D588 (MiGetFastLargePages.c)
 *     MiPruneProcessLargePageCaches @ 0x1403614A0 (MiPruneProcessLargePageCaches.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1403863B4 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140386D90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140664B5C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140666064 (MiFreeLargeProcessPagesToCache.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MmCreateShadowMapping @ 0x14080B624 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x140A3D534 (MiAllocateFastAwePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B3A6E8 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeLargePfnList(_QWORD *a1)
{
  __int64 result; // rax

  result = 4LL;
  do
  {
    a1[2] = 0LL;
    a1[1] = a1;
    *a1 = a1;
    a1 += 3;
    --result;
  }
  while ( result );
  return result;
}
