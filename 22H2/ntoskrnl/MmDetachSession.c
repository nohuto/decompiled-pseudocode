/*
 * XREFs of MmDetachSession @ 0x1402EC090
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14026368C (ExpHpCompactSessionPools.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x140336320 (MiUnlockStealVm.c)
 *     MiEmptyAccessLogs @ 0x1403A2D30 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x140578DB0 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ExGetSessionPoolTagInformation @ 0x14066070C (ExGetSessionPoolTagInformation.c)
 *     PspDetachSession @ 0x140660AA4 (PspDetachSession.c)
 *     ExCallSessionCallBack @ 0x140660AC8 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x140663DF0 (ObpProcessRemoveObjectQueue.c)
 *     MmPrefetchVirtualMemory @ 0x1406FB498 (MmPrefetchVirtualMemory.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1407178F4 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x140792C70 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E410 (CmFcpChangeSubscriptionWrapper.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4920 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408F5204 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140900080 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x14093E350 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140949FB0 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C64 (VfThunkApplyThunks.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  --*(_DWORD *)(v2 + 100);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 100) )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  KiUnstackDetachProcess(a2, 0);
  if ( v2 )
    KeSignalGate(v2 + 104, 1LL);
  return 0LL;
}
