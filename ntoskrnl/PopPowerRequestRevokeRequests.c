__int64 __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  PVOID *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-28h] BYREF

  memset(&v10, 0, sizeof(v10));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &v10);
  if ( a2 )
    goto LABEL_4;
  a1 &= ~PopPowerRequestGlobalOverrideMask;
  if ( a1 )
  {
    PopPowerRequestGlobalOverrideMask |= a1;
LABEL_4:
    for ( i = (PVOID *)PopPowerRequestObjectList; ; i = (PVOID *)*i )
    {
      if ( i == &PopPowerRequestObjectList )
      {
        PopQueueWorkItem((__int64)&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
        break;
      }
      if ( a2 )
      {
        if ( (a1 & *((_DWORD *)i + 7)) == a1 )
          continue;
        *((_DWORD *)i + 7) |= a1;
      }
      PopPowerRequestEvaluatePendingRequestStatus(i, 0LL);
    }
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
  OldIrql = v10.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v10.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v10.OldIrql + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
