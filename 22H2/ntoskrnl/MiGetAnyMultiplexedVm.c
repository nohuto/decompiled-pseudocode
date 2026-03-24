/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14027D77C
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2B0 (MiProbeAndLockPrepare.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4A0 (MiMakeHyperRangeAccessible.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiOutPageSingleKernelStack @ 0x1402638B0 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x14027ABCC (MiMarkPteDirty.c)
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 *     MmFreePoolMemory @ 0x14027AEC8 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiPfCompleteInPageSupport @ 0x14027D218 (MiPfCompleteInPageSupport.c)
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     MiGetNextPageTable @ 0x14028DEA0 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402922C0 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x1402E9388 (MiClearNonPagedPtes.c)
 *     MiLockStealSystemVm @ 0x1402EB854 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiEncodeProtoFill @ 0x140311C9C (MiEncodeProtoFill.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14031AE60 (MmQuerySystemWorkingSetInformation.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiSetPagingOfDriver @ 0x140336B2C (MiSetPagingOfDriver.c)
 *     MiOutSwapKernelStackPage @ 0x140350ED0 (MiOutSwapKernelStackPage.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiRecheckCombineVm @ 0x140367420 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x140367A50 (MiCapturePfnVm.c)
 *     MiLockPagedAddress @ 0x14036B274 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140396E8C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCountSystemImageCommitment @ 0x14039E594 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1403B4B18 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B81F4 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B8FF0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B93A0 (MiGetNextNonGapPfnPage.c)
 *     MiExceptionForMappedVa @ 0x14052CF68 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052D054 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x14052E254 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538ACC (MmRemoveSystemCacheFromDump.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F638 (MmWriteSystemImageTracepoint.c)
 *     MiMapRetpolineStubs @ 0x140543F7C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 *     MiReleaseLargePteMappings @ 0x140553EFC (MiReleaseLargePteMappings.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140637780 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x14066BCCC (MiMapImageInSystemSpace.c)
 *     MiGetCcAccessLog @ 0x1406901BC (MiGetCcAccessLog.c)
 *     HvTrimHive @ 0x14069FEEC (HvTrimHive.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14075E45C (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x1408C4B10 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x1408C4BC0 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8530 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408CB1D4 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408CB284 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0B44 (MiLockAndMapEntireDriver.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408D1840 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140995708 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409B03AC (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409B0518 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B05B4 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140A42100 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4E614 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x140A4F20C (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140A543A4 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeDynamicVa @ 0x140A6836C (MiInitializeDynamicVa.c)
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
    v2 = (char *)&unk_140C529C0;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C4F000;
  }
  return &v2[64 * v1];
}
