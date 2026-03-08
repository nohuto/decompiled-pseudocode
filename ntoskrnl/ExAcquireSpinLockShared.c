/*
 * XREFs of ExAcquireSpinLockShared @ 0x140308060
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14020A53C (MiPageFileLargestBitmapsRun.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140216ED8 (IopReferenceIoAttributionFromProcess.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14027F900 (IoSetDiskIoAttributionFromThread.c)
 *     MiStartingOffsetNeedLock @ 0x14028C0C0 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     MiGetChannelInformation @ 0x140295C20 (MiGetChannelInformation.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402988C8 (SepGetSingletonEntryFromIndexNumber.c)
 *     MiTrimSection @ 0x1402A0034 (MiTrimSection.c)
 *     MiFindLastSubsection @ 0x1402A5010 (MiFindLastSubsection.c)
 *     MiCheckSlabPage @ 0x1402A6DE4 (MiCheckSlabPage.c)
 *     MiObtainParkedCoreMasks @ 0x1402A7130 (MiObtainParkedCoreMasks.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 *     PopFxLockDevice @ 0x1402B91F4 (PopFxLockDevice.c)
 *     MiSystemImageHasPrivateFixups @ 0x1402D54E0 (MiSystemImageHasPrivateFixups.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403041DC (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetNextPartitionUnsafe @ 0x140305364 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapLock @ 0x140307040 (RtlpCSparseBitmapLock.c)
 *     ExpStampBigPoolEntry @ 0x140307098 (ExpStampBigPoolEntry.c)
 *     PopPepLockActivityLink @ 0x14030768C (PopPepLockActivityLink.c)
 *     PfSnGetFileInformation @ 0x140307D00 (PfSnGetFileInformation.c)
 *     RtlpHpAcquireLockShared @ 0x140309A10 (RtlpHpAcquireLockShared.c)
 *     IopFindDiskIoAttribution @ 0x14030AE38 (IopFindDiskIoAttribution.c)
 *     ExProtectPoolEx @ 0x14030B674 (ExProtectPoolEx.c)
 *     MiLocateSubsectionNode @ 0x140332910 (MiLocateSubsectionNode.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     PsGetWorkOnBehalfThread @ 0x14033E134 (PsGetWorkOnBehalfThread.c)
 *     MiReferenceInPageFile @ 0x140343354 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403AFF50 (HalpQueryNumaRangeTableInformation.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     ExRemovePoolTag @ 0x1403BD8EC (ExRemovePoolTag.c)
 *     MiObtainPagefileHashes @ 0x140466CF4 (MiObtainPagefileHashes.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14052F760 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14055CBA4 (IopMcFindNextTableEntryForUnlock.c)
 *     PopPepGetComponentVetoMasks @ 0x14059C914 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14059CA0C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetDeviceVetoMasks @ 0x14059CB28 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14059CC00 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14059D77C (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1405A1CE0 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405A2150 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B710C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D0158 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x140608878 (ExpCheckForResource.c)
 *     MmUnmapReservedMapping @ 0x14061C4D0 (MmUnmapReservedMapping.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140620094 (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406279E8 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140627BD8 (MiGetListOfPendingBadPages.c)
 *     MiKernelStackVaToStackNode @ 0x14062AE2C (MiKernelStackVaToStackNode.c)
 *     MmIsFileObjectAPagingFile @ 0x14063990C (MmIsFileObjectAPagingFile.c)
 *     MiInitializeCachedExtentWalker @ 0x14063B7E8 (MiInitializeCachedExtentWalker.c)
 *     MiGenerateAccessViolation @ 0x1406439D8 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiTransientPageListWriter @ 0x14064D958 (MiTransientPageListWriter.c)
 *     MiTransientCombineAddress @ 0x140651114 (MiTransientCombineAddress.c)
 *     MiGetPartitionNodeInformation @ 0x140657AE0 (MiGetPartitionNodeInformation.c)
 *     MiFindPageFileMemoryExtent @ 0x14065DAE0 (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140667104 (MiGetPrototypePteBoundaries.c)
 *     MiGetPrototypePteRanges @ 0x140667260 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x140667510 (MiReferencePfBackedSection.c)
 *     ExQuerySystemLockInformation @ 0x140AA7BF8 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v4; // rdx
  signed __int32 v5; // [rsp+38h] [rbp+10h]
  signed __int32 v6; // [rsp+38h] [rbp+10h]
  signed __int32 v7; // [rsp+40h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v4) = 4;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    v7 = _InterlockedCompareExchange(SpinLock, v5 + 1, v5);
    if ( v7 != v5 )
    {
      while ( v7 >= 0 )
      {
        v6 = v7;
        v7 = _InterlockedCompareExchange(SpinLock, v7 + 1, v7);
        if ( v7 == v6 )
          return CurrentIrql;
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
