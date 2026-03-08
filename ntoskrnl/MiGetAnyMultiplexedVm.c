/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14020F4D4
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     MiPfCompleteInPageSupport @ 0x14020DAF4 (MiPfCompleteInPageSupport.c)
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 *     MiComputeMaximumFaultCluster @ 0x14026AFC0 (MiComputeMaximumFaultCluster.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiRecheckCombineVm @ 0x14029F408 (MiRecheckCombineVm.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiMarkPteDirty @ 0x1402DFE5C (MiMarkPteDirty.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402F71FC (MmQuerySystemWorkingSetInformation.c)
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x14031DE80 (MiCountSharedPages.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiIsCfgBitMapPageShared @ 0x140346620 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 *     MiEncodeProtoFill @ 0x140369074 (MiEncodeProtoFill.c)
 *     MiMapContiguousMemoryLarge @ 0x14038A3C4 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038AB90 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x14038AF50 (MiGetNextNonGapPfnPage.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiGetFileOnlyRanges @ 0x140618854 (MiGetFileOnlyRanges.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14062E2CC (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x14062E6B0 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14062E748 (MiFaultInPagedPool.c)
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x14063E2EC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiOutSwapKernelStackPage @ 0x140650568 (MiOutSwapKernelStackPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiGetCcAccessLog @ 0x14077A724 (MiGetCcAccessLog.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 *     HvTrimHive @ 0x14085BB7C (HvTrimHive.c)
 *     MiCompleteSecureDriverLoad @ 0x140880F78 (MiCompleteSecureDriverLoad.c)
 *     MmMapLockedRestartPages @ 0x140A286F0 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140A287B0 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A2DCE0 (MmReturnChargesToLockPagedPool.c)
 *     MiLockAndMapEntireDriver @ 0x140A31608 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 *     MmLogSystemShareablePfnInfo @ 0x140A3D248 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140AA8EFC (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140AA9138 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x140AA9288 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AA9324 (MiMarkNonPagedHiberPhasePages.c)
 *     MiBuildPagedPool @ 0x140B38784 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140B39B80 (MiAddLoaderHalIoMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140B3A6E8 (MiCreateInitialSystemWsles.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B4F638 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicVa @ 0x140B6BDEC (MiInitializeDynamicVa.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 3LL * a1;
    v2 = (char *)&unk_140C6F480;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C69680;
  }
  return &v2[64 * v1];
}
