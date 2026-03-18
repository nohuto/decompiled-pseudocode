/*
 * XREFs of MiSearchNumaNodeTable @ 0x14026E9B0
 * Callers:
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MmDeleteKernelStackEx @ 0x14026F7B0 (MmDeleteKernelStackEx.c)
 *     MiLargePageFreeToZero @ 0x140286E20 (MiLargePageFreeToZero.c)
 *     MiCheckSlabPage @ 0x1402922C8 (MiCheckSlabPage.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x1402D6220 (MiDeleteClusterPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 *     MiGetFreeLargePage @ 0x1402D8720 (MiGetFreeLargePage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfnToStandbyLookaside @ 0x1402DDEF0 (MiPfnToStandbyLookaside.c)
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9810 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFinalizeImageHeaderPage @ 0x140330294 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiPurgingPageFromLookaside @ 0x140331310 (MiPurgingPageFromLookaside.c)
 *     MiQueryLeafPte @ 0x140331710 (MiQueryLeafPte.c)
 *     MiCoalesceFreeLargePages @ 0x140332C20 (MiCoalesceFreeLargePages.c)
 *     MiUpdatePageAttributeStamp @ 0x140334AD8 (MiUpdatePageAttributeStamp.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiPfnBestZeroAttribute @ 0x1403393CC (MiPfnBestZeroAttribute.c)
 *     MiClearStackOwners @ 0x14033D41C (MiClearStackOwners.c)
 *     MiReturnPhysicalPoolPages @ 0x14034000C (MiReturnPhysicalPoolPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x140360EF4 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiDescribePageRun @ 0x140375ADC (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x140375D64 (MiRestrictRangeToNode.c)
 *     MiMapContiguousMemoryLarge @ 0x14038C884 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x140396D44 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiDemoteLargeFreePage @ 0x1403A0778 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A088C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BD5C0 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C4178 (MiReplaceNumaStandbyPage.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CCA60 (MiDemoteSlabEntriesDpc.c)
 *     MiPruneStandbyPages @ 0x14046C950 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x14046EA2C (MiReuseUltraPageTable.c)
 *     MiPageToNode @ 0x140617860 (MiPageToNode.c)
 *     MiFindHighestDescriptorByNode @ 0x140617A78 (MiFindHighestDescriptorByNode.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061F274 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiHugeRangeFreeToZero @ 0x140620CF4 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x14062103C (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140621584 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621E64 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140622128 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x140622878 (MiSetHugeRangePartitionId.c)
 *     MiUnlinkHugeRange @ 0x140622B2C (MiUnlinkHugeRange.c)
 *     MiUpdateHugePageCounts @ 0x140622DB8 (MiUpdateHugePageCounts.c)
 *     MiPrefetchPreallocatePages @ 0x140632198 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x140636D04 (MiReplaceLockedPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140644E44 (MiKernelShadowStackIdealForCaching.c)
 *     MiCompleteSecureProcessFault @ 0x140645C08 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064D754 (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D974 (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14064DF24 (MiSetPfnRemovalRequested.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EB14 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesInProgress @ 0x14064F384 (MiLargePageMovesInProgress.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140656CC8 (MiGetSlabAllocatorStandbyList.c)
 *     MiGetPartitionNodeInformation @ 0x14065A118 (MiGetPartitionNodeInformation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14065BD74 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065D55C (MiCoalesceActivePagesIntoFree.c)
 *     MiReplenishUltraPageTables @ 0x140661BEC (MiReplenishUltraPageTables.c)
 *     MiFreeLargePages @ 0x1406682C0 (MiFreeLargePages.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406686B4 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140B46278 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140B46628 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140B46B94 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B48744 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateKernelHalSlabRange @ 0x140B49DA0 (MiCreateKernelHalSlabRange.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B6E278 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiHotAddBootDescriptor @ 0x140B9A4C0 (MiHotAddBootDescriptor.c)
 *     MxSwitchDescriptors @ 0x140B9A6CC (MxSwitchDescriptors.c)
 *     MxInsertEnclaveBootPages @ 0x140B9AE40 (MxInsertEnclaveBootPages.c)
 *     MmUpdateSlabRangeType @ 0x140B9B53C (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // eax
  _QWORD *v5; // rdx

  v1 = dword_140C65B88;
  if ( dword_140C65B84 > (unsigned int)dword_140C65B88
    || (result = (char *)qword_140C65BC8 + 16 * dword_140C65B84, BugCheckParameter2 < *result)
    || dword_140C65B84 != dword_140C65B88 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C65B88 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      v5 = (char *)qword_140C65BC8 + 16 * v4;
      if ( BugCheckParameter2 < *v5 )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C65B88 || BugCheckParameter2 < v5[2] )
        {
          dword_140C65B84 = (v3 + v1) >> 1;
          return (char *)qword_140C65BC8 + 16 * v4;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
