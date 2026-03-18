/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14028551C
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215680 (MiOutSwapWorkingSetPte.c)
 *     MiCopyPfnEntryEx @ 0x140219D80 (MiCopyPfnEntryEx.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14021A014 (MiInitializeAllResidentPageBasePfns.c)
 *     MiReservePageFileSpace @ 0x140284880 (MiReservePageFileSpace.c)
 *     MiTransferSoftwarePte @ 0x1402856B0 (MiTransferSoftwarePte.c)
 *     MiLargePageFreeToZero @ 0x140286E20 (MiLargePageFreeToZero.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageChain @ 0x1402D68E0 (MiInsertLargePageChain.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishLargePageFree @ 0x1402E7594 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiDemoteLocalLargePage @ 0x1402E81B0 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBA40 (MiGetLargePageChain.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiInitializeMdlBatchPages @ 0x1402F9310 (MiInitializeMdlBatchPages.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiCreatePfnTemplate @ 0x140375BA4 (MiCreatePfnTemplate.c)
 *     MiInitializeMdlPfn @ 0x140389D10 (MiInitializeMdlPfn.c)
 *     MiDrainZeroLookasides @ 0x1403BBB48 (MiDrainZeroLookasides.c)
 *     MiConvertContiguousPages @ 0x1403BD470 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D70E4 (MiLargeFreePageToMdl.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     MiEnableNewPfns @ 0x14061A9D0 (MiEnableNewPfns.c)
 *     MiBuildReservationCluster @ 0x140638354 (MiBuildReservationCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1406518C4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 *     MiClearPageFileHash @ 0x140665C00 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiFreeReservationRun @ 0x1407B76F4 (MiFreeReservationRun.c)
 *     MiCreateBootSlabEntries @ 0x140B49F68 (MiCreateBootSlabEntries.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( qword_140C65C40 )
    {
      if ( (a1 & 0x10) != 0 )
        LODWORD(a1) = a1 & 0xFFFFFFEF;
      else
        LODWORD(a1) = ~(_DWORD)qword_140C65C40 & a1;
    }
    v2 = a1;
  }
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
