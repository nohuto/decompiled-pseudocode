/*
 * XREFs of MiTbFlushType @ 0x1402B7898
 * Callers:
 *     MiValidFault @ 0x140209710 (MiValidFault.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiNoFaultFound @ 0x140292848 (MiNoFaultFound.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     MiEmptyWorkingSetInitiate @ 0x140317DA0 (MiEmptyWorkingSetInitiate.c)
 *     MiTrimWorkingSet @ 0x140318000 (MiTrimWorkingSet.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiCrcStillIntact @ 0x1403674C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiSimpleAging @ 0x14036BD78 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0248 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053660C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053C92C (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1406BF340 (MiEliminateZeroPages.c)
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
