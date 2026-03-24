/*
 * XREFs of MiSearchNumaNodeTable @ 0x1402ABE20
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiLargePageFreeToZero @ 0x1402843C0 (MiLargePageFreeToZero.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiInsertNumaStandbyPage @ 0x1402A9F20 (MiInsertNumaStandbyPage.c)
 *     MmDeleteKernelStack @ 0x1402AB200 (MmDeleteKernelStack.c)
 *     MiDeleteClusterPage @ 0x1402ABEC0 (MiDeleteClusterPage.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiReturnPhysicalPoolPages @ 0x1402E9A84 (MiReturnPhysicalPoolPages.c)
 *     MiDemoteLargeFreePage @ 0x1402EF04C (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402EF1FC (MiTryUnlinkNodeLargePage.c)
 *     MiRebuildLargeZeroPage @ 0x1402FA800 (MiRebuildLargeZeroPage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140321670 (MiUpdatePageAttributeStamp.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1403246B0 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiPageToNode @ 0x140329884 (MiPageToNode.c)
 *     MiReplaceNumaStandbyPage @ 0x1403344FC (MiReplaceNumaStandbyPage.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MiInitializeMdlBatchPages @ 0x140354E44 (MiInitializeMdlBatchPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140355284 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374EF4 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x140399FC4 (MiInitializeNewUltraHugeContext.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C344 (MiUnlinkNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403ABD38 (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403AC2E0 (MiRestrictRangeToNode.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B5BD4 (MiAddExpansionNonPagedPool.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B81F4 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x14052E4E0 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     MiInsertHugeRangeInList @ 0x140533548 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140533A9C (MiUnlinkHugeRange.c)
 *     MiPrefetchPreallocatePages @ 0x140539560 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiQueryLeafPte @ 0x140546F60 (MiQueryLeafPte.c)
 *     MI_NODE_FROM_PFN @ 0x140547A78 (MI_NODE_FROM_PFN.c)
 *     MiFreeListPageContentsChanged @ 0x14054ED8C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054EF2C (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054F368 (MiSetPfnRemovalRequested.c)
 *     MiGetPagesToZero @ 0x14054FC8C (MiGetPagesToZero.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiLargePageMovesInProgress @ 0x140556A84 (MiLargePageMovesInProgress.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140A43930 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A43A34 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x140A43D1C (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140A441C0 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A552F0 (MiHotAddBootDeferredDescriptors.c)
 *     MxSwitchDescriptors @ 0x140A9304C (MxSwitchDescriptors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140C4DE88;
  if ( dword_140C4DE84 > (unsigned int)dword_140C4DE88
    || (result = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84, BugCheckParameter2 < *result)
    || dword_140C4DE84 != dword_140C4DE88 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C4DE88 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      result = (char *)qword_140C4DEC8 + 16 * v4;
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DEC8, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C4DE88 || BugCheckParameter2 < result[2] )
        {
          dword_140C4DE84 = (v3 + v1) >> 1;
          return result;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
