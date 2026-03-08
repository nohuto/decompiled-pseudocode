/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x14032F834
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiGetUltraPage @ 0x1402446C8 (MiGetUltraPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiFinalizeImageHeaderPage @ 0x1402C6548 (MiFinalizeImageHeaderPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402CE68C (MiReInitializeFreeSlabPfn.c)
 *     MiSlistGetFreePage @ 0x1402D76AC (MiSlistGetFreePage.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14038B564 (MiPreparePfnDatabasePageForFree.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x140391BEC (MiFreeLargeInitializationCodePages.c)
 *     MiSwapStackPageNoDpc @ 0x1403963DC (MiSwapStackPageNoDpc.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiTradeTransitionPage @ 0x1403B7C98 (MiTradeTransitionPage.c)
 *     MiGetPageSlist @ 0x1403D1650 (MiGetPageSlist.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiPreInitializeSystemImagePage @ 0x14062A1BC (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReuseStandbyPage @ 0x14064F6CC (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140664B5C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
