/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x14023FDE0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201B90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140201F50 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpGetRelatedTargetDevice @ 0x140202D04 (PnpGetRelatedTargetDevice.c)
 *     CcGetVirtualAddress @ 0x14021FB80 (CcGetVirtualAddress.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14023E404 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 *     IopInterlockedIncrementUlong @ 0x14023FD94 (IopInterlockedIncrementUlong.c)
 *     IopGetDevicePDO @ 0x14023FFC4 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402409DC (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140240A5C (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopInsertRemoveDevice @ 0x140241748 (IopInsertRemoveDevice.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1402417BC (FsRtlNotifySetCancelRoutine.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
 *     IopMountInitializeVpb @ 0x1402B17F0 (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x1402B2384 (IopQueryVpbFlagsSafe.c)
 *     PopQueueQuerySetIrp @ 0x1402BAFA4 (PopQueueQuerySetIrp.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402C16B4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402C19B4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeOplock @ 0x1402E06C0 (FsRtlUninitializeOplock.c)
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     IopInterlockedRemoveHeadList @ 0x1402EE4D4 (IopInterlockedRemoveHeadList.c)
 *     IoDetachDevice @ 0x1402F0C40 (IoDetachDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     FsRtlpOplockBreakToII @ 0x1402F3B90 (FsRtlpOplockBreakToII.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402F57D0 (FsRtlpCancelOplockRHIrp.c)
 *     IopGetMountFlag @ 0x1402F6CEC (IopGetMountFlag.c)
 *     IoReleaseVpbSpinLock @ 0x1402F9230 (IoReleaseVpbSpinLock.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     IoGetDriverObjectExtension @ 0x1402FA2A0 (IoGetDriverObjectExtension.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1402FAAFC (IoGetLowerDeviceObjectWithTag.c)
 *     WmipNotificationIrpCancel @ 0x1402FEA50 (WmipNotificationIrpCancel.c)
 *     FsRtlUninitializeFileLock @ 0x1402FFA90 (FsRtlUninitializeFileLock.c)
 *     IopCsqCancelRoutine @ 0x140301020 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403025A0 (IopResurrectDriver.c)
 *     IopCheckVpbMounted @ 0x14030EE30 (IopCheckVpbMounted.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     IopInterlockedInsertHeadList @ 0x140389054 (IopInterlockedInsertHeadList.c)
 *     CcInitializePartitionVacbs @ 0x14039BA70 (CcInitializePartitionVacbs.c)
 *     IoAllocateDriverObjectExtension @ 0x14039FF80 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x1403A3A3C (IopInterlockedInsertTailList.c)
 *     IopCheckUnloadDriver @ 0x1403A623C (IopCheckUnloadDriver.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403ACFD0 (FsRtlpCancelExclusiveIrp.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x1403B20FC (PnpFindMountableDevice.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403B9C94 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x1403BD650 (CcAllocateInitializeVacbArray.c)
 *     IopSetFsRegistrationInProgress @ 0x1403BEA84 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x1403C0BF0 (IoEnumerateDeviceObjectList.c)
 *     IoGetDiskDeviceObject @ 0x1403C0DE0 (IoGetDiskDeviceObject.c)
 *     IopInterlockedDecrementUlong @ 0x1403C19DC (IopInterlockedDecrementUlong.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403CD730 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpIsChainDereferenced @ 0x1403CE6E0 (PnpIsChainDereferenced.c)
 *     PnpMarkDeviceForRemove @ 0x1403CF1B8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403CF5C0 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403CFA9C (PnpUnlockMountableDevice.c)
 *     IopCheckStackForTransactionSupport @ 0x1403D09F0 (IopCheckStackForTransactionSupport.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x140409FD0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopStartNextPacket @ 0x1404571CC (IopStartNextPacket.c)
 *     CcDereferenceVacbArray @ 0x140535B1C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140535BC4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1405372DC (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14053B390 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053BB78 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053BDB0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053BE94 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14053C1D0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x14053C500 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053C86C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopDisassociateThreadIrp @ 0x140552D34 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140553224 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x14055373C (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405541E0 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x140554EE0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x1405552A8 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacketByKey @ 0x140555718 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14055EB08 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14055F1A4 (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x14055F6E0 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x140562050 (PiSwIrpCancelStartCreate.c)
 *     RawCheckForDeleteVolume @ 0x1405A479C (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1405A483C (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x1405E2A40 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A96D40 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140ACFA00 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140ACFA64 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140ACFAC0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140ACFB68 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140ACFBD0 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140ACFCE8 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140ACFD4C (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v2 = OldIrql;
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
