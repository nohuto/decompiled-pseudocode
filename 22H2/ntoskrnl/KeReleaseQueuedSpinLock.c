/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x140291250
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057B0 (FsRtlpRequestShareableOplock.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IoReleaseVpbSpinLock @ 0x14026DC60 (IoReleaseVpbSpinLock.c)
 *     IopInterlockedIncrementUlong @ 0x14028F76C (IopInterlockedIncrementUlong.c)
 *     CcGetVacbMiss @ 0x140291040 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x1402A15A0 (CcGetVirtualAddress.c)
 *     IopCheckVpbMounted @ 0x1402D40D0 (IopCheckVpbMounted.c)
 *     IoBoostThreadIoPriority @ 0x1402D8E10 (IoBoostThreadIoPriority.c)
 *     IopQueryVpbFlagsSafe @ 0x1402E6A38 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x1402E6A90 (IopMountInitializeVpb.c)
 *     CcExtendVacbArray @ 0x1402F2054 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x1402F6110 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F7DB4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F8104 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140302F58 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x140303070 (FsRtlCancelNotify.c)
 *     FsRtlpOplockCleanup @ 0x140304D20 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140305140 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x140306650 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14030A544 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x140314120 (IoCancelIrp.c)
 *     FsRtlpOplockBreakToII @ 0x14031DE1C (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14032634C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x1403281F0 (IoGetDriverObjectExtension.c)
 *     WmipNotificationIrpCancel @ 0x14032B000 (WmipNotificationIrpCancel.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14034C324 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x14034C5D8 (IopGetDevicePDO.c)
 *     IoDetachDevice @ 0x140360170 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140360440 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x1403605FC (IopInsertRemoveDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x140360F2C (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1403616F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C590 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036CD18 (FsRtlpOplockBreakToNone.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036E6A4 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpRemoveLockedDeviceNode @ 0x140370078 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x140370400 (PnpFindMountableDevice.c)
 *     PnpIsChainDereferenced @ 0x140370E28 (PnpIsChainDereferenced.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403752B0 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x14037A8AC (CcAllocateInitializeVacbArray.c)
 *     IopCheckUnloadDriver @ 0x14037BF5C (IopCheckUnloadDriver.c)
 *     IoAllocateDriverObjectExtension @ 0x14037F170 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedRemoveHeadList @ 0x14037F294 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403929CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x1403934C4 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403936BC (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140393718 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x140394330 (IoGetDiskDeviceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x140394634 (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x140394B44 (RawCheckForDeleteVolume.c)
 *     IopInterlockedDecrementUlong @ 0x140394DDC (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x140397C44 (PopQueueQuerySetIrp.c)
 *     IopSetFsRegistrationInProgress @ 0x140399964 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x14039A520 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x1403A4C10 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403A6B30 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403C2F88 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C4BB8 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C8DC0 (IopInterlockedInsertTailList.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0CC0 (IopCopyCompleteReadIrp.c)
 *     CcDereferenceVacbArray @ 0x1404EAFE0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB088 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404EC364 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EF9F0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0144 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F0378 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404F0458 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404F0520 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F07CC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F08CC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0970 (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x1405003AC (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x14050081C (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140500C54 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140505390 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1405060C0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140506470 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x140506804 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1405068C4 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050CE60 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14050DBAC (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x14050DE00 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x14050FCB0 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x1405105C0 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x140584D84 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB150 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D6948 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D69AC (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x1409D6A08 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x1409D6AB0 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D6B18 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1409D6C30 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1409D6C94 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  volatile signed __int64 **v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v7; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v3 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v2);
  v4 = (__int64)*v2;
  if ( *v2 )
    goto LABEL_8;
  if ( v2 != (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
  {
    v4 = KxWaitForLockChainValid(v2);
LABEL_8:
    *v2 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v7;
      if ( !v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  __writecr8(v3);
}
