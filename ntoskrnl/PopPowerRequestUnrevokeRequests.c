/*
 * XREFs of PopPowerRequestUnrevokeRequests @ 0x1403A5A90
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408525A4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x14097E750 (PopPowerRequestNotifyTtmSessionInitialized.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1402BCCE4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestUnrevokeRequests(int a1)
{
  int v2; // ebx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  int v5; // eax
  PVOID *v6; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v2 = PopPowerRequestGlobalOverrideMask & a1;
  if ( v2 )
  {
    v5 = ~v2 & PopPowerRequestGlobalOverrideMask;
    v6 = (PVOID *)PopPowerRequestObjectList;
    PopPowerRequestGlobalOverrideMask = v5;
    while ( v6 != &PopPowerRequestObjectList )
    {
      PopPowerRequestEvaluatePendingRequestStatus(v6, 0LL);
      v6 = (PVOID *)*v6;
    }
    PopQueueWorkItem((__int64)&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
