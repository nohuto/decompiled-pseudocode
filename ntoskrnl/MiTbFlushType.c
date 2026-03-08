/*
 * XREFs of MiTbFlushType @ 0x140224BDC
 * Callers:
 *     MiCrcStillIntact @ 0x140210E18 (MiCrcStillIntact.c)
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiNoFaultFound @ 0x1402D3500 (MiNoFaultFound.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiTrimWorkingSet @ 0x1402F08AC (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1402F0B90 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1402F6AAC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyWorkingSetInitiate @ 0x140301814 (MiEmptyWorkingSetInitiate.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiClearPteAccessedBitRange @ 0x1403BFD84 (MiClearPteAccessedBitRange.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406332BC (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1407F6B10 (MiEliminateZeroPages.c)
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
