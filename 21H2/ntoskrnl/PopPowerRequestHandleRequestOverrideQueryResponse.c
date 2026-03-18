/*
 * XREFs of PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14036A5FC
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407EFD2C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14036A48C (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1407EFDAC (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestTableLookupEntry @ 0x1407EFF80 (PopPowerRequestTableLookupEntry.c)
 */

__int64 __fastcall PopPowerRequestHandleRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquirePowerRequestPushLock(a1);
  v2 = PopPowerRequestTableLookupEntry(*v1);
  if ( v2 )
  {
    v3 = v1[2];
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    *(_DWORD *)(v2 + 24) = v3;
    PopPowerRequestEvaluatePendingRequestStatus((_BYTE *)v2, 0LL);
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
    PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
  }
  return PopReleasePowerRequestPushLock();
}
