/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90
 * Callers:
 *     PsGetWorkOnBehalfThread @ 0x14020558C (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14024E0D0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140250DC4 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReferenceCallBackBlock @ 0x14025A1B0 (ExReferenceCallBackBlock.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     KeQueryAffinityProcess @ 0x14025C0A0 (KeQueryAffinityProcess.c)
 *     PopPepReleaseActivityLink @ 0x140261488 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x1402617D8 (PopPepLockActivityLink.c)
 *     MiTrimSection @ 0x14026FD60 (MiTrimSection.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140278FDC (IopReferenceIoAttributionFromProcess.c)
 *     PsGetNextPartitionUnsafe @ 0x140279388 (PsGetNextPartitionUnsafe.c)
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     RtlpHpLfhContextCompact @ 0x1402871AC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140287294 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140287DB0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 *     MiGetControlAreaPtes @ 0x14029657C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140297160 (MiLocateSubsectionNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14029AE28 (MiSystemImageHasPrivateFixups.c)
 *     PfSnGetFileInformation @ 0x14029C120 (PfSnGetFileInformation.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14029CAE4 (MmIsFileObjectAPagingFile.c)
 *     MmUnlockLoadedModuleListShared @ 0x14029CDE4 (MmUnlockLoadedModuleListShared.c)
 *     MiEndingOffsetWithLock @ 0x14029CE20 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x14029D694 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     ExpAddTagForBigPages @ 0x1402BC450 (ExpAddTagForBigPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     IopFindDiskIoAttribution @ 0x1402E0610 (IopFindDiskIoAttribution.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ExRemovePoolTag @ 0x1402EAE78 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x1402EB6EC (MiLookupIoPageNode.c)
 *     MiIsProbeActive @ 0x1402ECF54 (MiIsProbeActive.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402F781C (KiActivateWaiterQueueWithNoLocks.c)
 *     MiFindLastSubsection @ 0x1402F974C (MiFindLastSubsection.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402FC830 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1402FD14C (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402FF000 (RtlpHpLfhSubsegmentCreate.c)
 *     KeQueryBasePriorityThread @ 0x1402FFDE0 (KeQueryBasePriorityThread.c)
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x1403234A8 (MiGetPrototypePteRanges.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140333E78 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14034D854 (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPageFromSlabAllocator @ 0x140359630 (MiGetPageFromSlabAllocator.c)
 *     KeSetLegacyAffinityThread @ 0x14035E050 (KeSetLegacyAffinityThread.c)
 *     ExProtectPoolEx @ 0x1403622B8 (ExProtectPoolEx.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 *     MiAllocateCombineProto @ 0x140367760 (MiAllocateCombineProto.c)
 *     InsertEventEntryInLookUpTable @ 0x14036D608 (InsertEventEntryInLookUpTable.c)
 *     PopFxLockDevice @ 0x140370AE4 (PopFxLockDevice.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403723EC (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x140375F10 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037CA40 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA94 (MiKernelStackVaToStackNode.c)
 *     DbgEnumerateCallback @ 0x140394CD0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A5B8C (MiGetSharedProtosAtDpcLevel.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8440 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CE79C (HalpQueryNumaRangeTableInformation.c)
 *     KeQueryCpuSetsProcess @ 0x14051C594 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x140525AE4 (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x140531BD0 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x140547D40 (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x1405484A0 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x140552EA0 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140557BC0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x140557CEC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055D164 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055D500 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x1405744F0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1405745E8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1405746C0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1405747D0 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1405753FC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140575CE4 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140581D80 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582164 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405856DC (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x140595250 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x1405953A4 (RtlpHpLargeAllocSize.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14059792C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405A2610 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x1405A2710 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1405A2AAC (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3BD4 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A44C4 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1405A4B2C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x1405A5084 (VmpSplitMemoryRange.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3B28 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B5564 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B2DA4 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DF2F4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5CFC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    v3 = SchedulerAssist[6] - 1;
    SchedulerAssist[6] = v3;
    if ( !v3 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
}
