/*
 * XREFs of PopPowerRequestUnrevokeRequests @ 0x140369A40
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140989EE0 (PopPowerRequestNotifyTtmSessionInitialized.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14036A48C (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestUnrevokeRequests(int a1)
{
  int v2; // ebx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  int v5; // eax
  PVOID *v6; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
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
      PopPowerRequestEvaluatePendingRequestStatus(v6);
      v6 = (PVOID *)*v6;
    }
    PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
