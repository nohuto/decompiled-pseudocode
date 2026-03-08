/*
 * XREFs of MmDetachSession @ 0x1402EA460
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1403B7AF8 (MiUnlockStealVm.c)
 *     PopWatchdogWorker @ 0x1403D0490 (PopWatchdogWorker.c)
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     PspDetachSession @ 0x140776B14 (PspDetachSession.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140A24E40 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, $115DCDF994C6370D29323EAB0E0C9502 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1368);
  memset(&v11, 0, sizeof(v11));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v11);
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 76) )
    v2 = 0LL;
  KxReleaseQueuedSpinLock(&v11);
  OldIrql = v11.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (v11.OldIrql + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  KiUnstackDetachProcess(a2);
  if ( v2 )
    KeSignalGate(v2 + 80, 1LL);
  return 0LL;
}
