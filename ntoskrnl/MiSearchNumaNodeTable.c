/*
 * XREFs of MiSearchNumaNodeTable @ 0x140319DD0
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfnToStandbyLookaside @ 0x140288780 (MiPfnToStandbyLookaside.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiCheckSlabPage @ 0x1402A6DE4 (MiCheckSlabPage.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFinalizeImageHeaderPage @ 0x1402C6548 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiPurgingPageFromLookaside @ 0x1402C75C0 (MiPurgingPageFromLookaside.c)
 *     MiCoalesceFreeLargePages @ 0x1402C89C0 (MiCoalesceFreeLargePages.c)
 *     MiPfnBestZeroAttribute @ 0x1402CEAFC (MiPfnBestZeroAttribute.c)
 *     MiClearStackOwners @ 0x1402D4AA0 (MiClearStackOwners.c)
 *     MiReturnPhysicalPoolPages @ 0x1402D878C (MiReturnPhysicalPoolPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1402F63E4 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MmDeleteKernelStackEx @ 0x140318070 (MmDeleteKernelStackEx.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiQueryLeafPte @ 0x14031D370 (MiQueryLeafPte.c)
 *     MiLargePageFreeToZero @ 0x1403341E0 (MiLargePageFreeToZero.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     MiGetFreeLargePage @ 0x14034FBD0 (MiGetFreeLargePage.c)
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 *     MiUpdatePageAttributeStamp @ 0x14036A854 (MiUpdatePageAttributeStamp.c)
 *     MiDescribePageRun @ 0x14037082C (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     MiMapContiguousMemoryLarge @ 0x14038A3C4 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x140394B74 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiDemoteLargeFreePage @ 0x14039BCC8 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403B7C98 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403BE8B8 (MiReplaceNumaStandbyPage.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403C7F40 (MiDemoteSlabEntriesDpc.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x140466B2C (MiReuseUltraPageTable.c)
 *     MiPageToNode @ 0x1406153B0 (MiPageToNode.c)
 *     MiFindHighestDescriptorByNode @ 0x1406155C8 (MiFindHighestDescriptorByNode.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiHugeRangeFreeToZero @ 0x14061E83C (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x14061F0CC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x14061F9B8 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x14061FC7C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x1406203CC (MiSetHugeRangePartitionId.c)
 *     MiUnlinkHugeRange @ 0x140620680 (MiUnlinkHugeRange.c)
 *     MiUpdateHugePageCounts @ 0x14062090C (MiUpdateHugePageCounts.c)
 *     MiPrefetchPreallocatePages @ 0x14062FD08 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140642840 (MiKernelShadowStackIdealForCaching.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064B138 (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14064B358 (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14064B908 (MiSetPfnRemovalRequested.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064C4F4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesInProgress @ 0x14064CD64 (MiLargePageMovesInProgress.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140654688 (MiGetSlabAllocatorStandbyList.c)
 *     MiGetPartitionNodeInformation @ 0x140657AE0 (MiGetPartitionNodeInformation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140659730 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065AF0C (MiCoalesceActivePagesIntoFree.c)
 *     MiReplenishUltraPageTables @ 0x14065F59C (MiReplenishUltraPageTables.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140666064 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140B37B68 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140B37F18 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140B38484 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B3A034 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateKernelHalSlabRange @ 0x140B3B690 (MiCreateKernelHalSlabRange.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B69ECC (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiHotAddBootDescriptor @ 0x140B962B0 (MiHotAddBootDescriptor.c)
 *     MxSwitchDescriptors @ 0x140B964BC (MxSwitchDescriptors.c)
 *     MxInsertEnclaveBootPages @ 0x140B96C30 (MxInsertEnclaveBootPages.c)
 *     MmUpdateSlabRangeType @ 0x140B9732C (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // eax
  _QWORD *v5; // rdx

  v1 = dword_140C65708;
  if ( dword_140C65704 > (unsigned int)dword_140C65708
    || (result = (char *)qword_140C65748 + 16 * dword_140C65704, BugCheckParameter2 < *result)
    || dword_140C65704 != dword_140C65708 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C65708 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      v5 = (char *)qword_140C65748 + 16 * v4;
      if ( BugCheckParameter2 < *v5 )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C65708 || BugCheckParameter2 < v5[2] )
        {
          dword_140C65704 = (v3 + v1) >> 1;
          return (char *)qword_140C65748 + 16 * v4;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
