/*
 * XREFs of PopPowerRequestReferenceAcquire @ 0x1402BBDF0
 * Callers:
 *     PpmBeginHighPerfRequest @ 0x1402B8BBC (PpmBeginHighPerfRequest.c)
 *     PoSetPowerRequest @ 0x1402BBD20 (PoSetPowerRequest.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x14073ACE4 (PopPowerRequestActionInfo.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x1402BBF38 (PopDiagTracePowerRequestChange.c)
 *     PopPowerRequestCallbackWorker @ 0x1402BC180 (PopPowerRequestCallbackWorker.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1402BCCE4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestReferenceAcquire(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdi
  int v6; // ebx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = (int)a2;
  v14 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v14 + 1) = &v14;
    *(_QWORD *)&v14 = &v14;
  }
  v5 = (_QWORD *)((unsigned __int64)&v14 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && ((1 << a2) & Object[5]) != 0
    && (a2 != 3 || (_KPROCESS *)*((_QWORD *)Object + 17) == KeGetCurrentThread()->ApcState.Process) )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( Object[v2 + 10] == -1 )
    {
      v6 = -1073741675;
    }
    else
    {
      Object[7] &= ~(1 << v2);
      ++Object[v2 + 10];
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopDiagTracePowerRequestChange(Object);
      v6 = 0;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v6 >= 0 )
    {
      if ( v5 )
      {
        if ( (_QWORD *)*v5 != v5 )
          PopPowerRequestCallbackWorker(v5);
      }
      else
      {
        PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
