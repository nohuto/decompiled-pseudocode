/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1402858B4
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6C0 (MiChangePageAttributeContiguous.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2AD0 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiSlistGetFreePage @ 0x1402EB994 (MiSlistGetFreePage.c)
 *     MiGetUltraPage @ 0x1402EC570 (MiGetUltraPage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiFinalizeImageHeaderPage @ 0x140330294 (MiFinalizeImageHeaderPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x140338F5C (MiReInitializeFreeSlabPfn.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14038DA24 (MiPreparePfnDatabasePageForFree.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14039386C (MiFreeLargeInitializationCodePages.c)
 *     MiSwapStackPageNoDpc @ 0x140399FDC (MiSwapStackPageNoDpc.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x1403BD470 (MiConvertContiguousPages.c)
 *     MiTradeTransitionPage @ 0x1403BD5C0 (MiTradeTransitionPage.c)
 *     MiGetPageSlist @ 0x1403D6B70 (MiGetPageSlist.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MiPreInitializeSystemImagePage @ 0x14062C63C (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x140636D04 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140645C08 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1406518C4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReuseStandbyPage @ 0x140651D2C (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660478 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1406671AC (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
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
