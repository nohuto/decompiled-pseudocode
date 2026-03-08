/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14032F49C
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140213BC4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInitializeMdlBatchPages @ 0x1402B4150 (MiInitializeMdlBatchPages.c)
 *     MiInsertLargePageChain @ 0x1402CADB0 (MiInsertLargePageChain.c)
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiGetLargePageChain @ 0x1402E98A8 (MiGetLargePageChain.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     MiLargePageFreeToZero @ 0x1403341E0 (MiLargePageFreeToZero.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiDemoteLocalLargePage @ 0x14034E760 (MiDemoteLocalLargePage.c)
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishLargePageFree @ 0x1403506BC (MiFinishLargePageFree.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiCreatePfnTemplate @ 0x1403708F4 (MiCreatePfnTemplate.c)
 *     MiInitializeMdlPfn @ 0x1403870D0 (MiInitializeMdlPfn.c)
 *     MiDrainZeroLookasides @ 0x1403B6E88 (MiDrainZeroLookasides.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D1BC4 (MiLargeFreePageToMdl.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiEnableNewPfns @ 0x140618520 (MiEnableNewPfns.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MiClearPageFileHash @ 0x1406635B0 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiFreeReservationRun @ 0x1407659CC (MiFreeReservationRun.c)
 *     MiCreateBootSlabEntries @ 0x140B3B858 (MiCreateBootSlabEntries.c)
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( qword_140C657C0 )
    {
      if ( (a1 & 0x10) != 0 )
        LODWORD(a1) = a1 & 0xFFFFFFEF;
      else
        LODWORD(a1) = ~(_DWORD)qword_140C657C0 & a1;
    }
    v2 = a1;
  }
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
