/*
 * XREFs of MiTbFlushType @ 0x14025B98C
 * Callers:
 *     MiCrcStillIntact @ 0x140215150 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiAgeWorkingSet @ 0x14025B650 (MiAgeWorkingSet.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     MiFreeWsleList @ 0x140280B00 (MiFreeWsleList.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiNoFaultFound @ 0x14033C340 (MiNoFaultFound.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiTrimWorkingSet @ 0x14035D074 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14035D35C (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140361580 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036D5A4 (MiEmptyWorkingSetInitiate.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5644 (MiClearPteAccessedBitRange.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14063574C (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x140636D04 (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x140696B90 (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
