/*
 * XREFs of ExAcquireSpinLockShared @ 0x14021CD40
 * Callers:
 *     PsGetWorkOnBehalfThread @ 0x14020558C (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14024E0D0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140250DC4 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReferenceCallBackBlock @ 0x14025A1B0 (ExReferenceCallBackBlock.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     PopPepLockActivityLink @ 0x1402617D8 (PopPepLockActivityLink.c)
 *     MiTrimSection @ 0x14026FD60 (MiTrimSection.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140278FDC (IopReferenceIoAttributionFromProcess.c)
 *     PsGetNextPartitionUnsafe @ 0x140279388 (PsGetNextPartitionUnsafe.c)
 *     RtlpHpAcquireLockShared @ 0x1402873F4 (RtlpHpAcquireLockShared.c)
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 *     MiGetControlAreaPtes @ 0x14029657C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140297160 (MiLocateSubsectionNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14029AE28 (MiSystemImageHasPrivateFixups.c)
 *     PfSnGetFileInformation @ 0x14029C120 (PfSnGetFileInformation.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14029CAE4 (MmIsFileObjectAPagingFile.c)
 *     MiEndingOffsetWithLock @ 0x14029CE20 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x14029D694 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     IopFindDiskIoAttribution @ 0x1402E0610 (IopFindDiskIoAttribution.c)
 *     ExRemovePoolTag @ 0x1402EAE78 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x1402EB6EC (MiLookupIoPageNode.c)
 *     MiIsProbeActive @ 0x1402ECF54 (MiIsProbeActive.c)
 *     MiFindLastSubsection @ 0x1402F974C (MiFindLastSubsection.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402FC830 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x1402FD4EC (RtlpCSparseBitmapLock.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x1403234A8 (MiGetPrototypePteRanges.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140333E78 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14034D854 (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPageFromSlabAllocator @ 0x140359630 (MiGetPageFromSlabAllocator.c)
 *     ExProtectPoolEx @ 0x1403622B8 (ExProtectPoolEx.c)
 *     MiAllocateCombineProto @ 0x140367760 (MiAllocateCombineProto.c)
 *     InsertEventEntryInLookUpTable @ 0x14036D608 (InsertEventEntryInLookUpTable.c)
 *     PopFxLockDevice @ 0x140370AE4 (PopFxLockDevice.c)
 *     MiFreePageToSlabAllocator @ 0x140375F10 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037CA40 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA94 (MiKernelStackVaToStackNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8440 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CE79C (HalpQueryNumaRangeTableInformation.c)
 *     MmUnmapReservedMapping @ 0x140531BD0 (MmUnmapReservedMapping.c)
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
 *     SepValidateAndCopyGlobalEntry @ 0x14059792C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405A2570 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3B28 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B5564 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B2DA4 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v6; // rcx
  signed __int32 v7; // ett
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql, v1, SchedulerAssist);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v6[6];
        v6[6] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v7 = *SpinLock & 0x7FFFFFFF;
    if ( v7 != _InterlockedCompareExchange(SpinLock, v7 + 1, v7) )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v9[6] - 1;
          v9[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
