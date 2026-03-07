int __fastcall PopApplyLegacyPowerRequestFlags(PVOID Object, char a2, char a3)
{
  int v3; // ebx
  int result; // eax
  int v8; // esi
  int v9; // eax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      PoSetPowerRequest(Object, PowerRequestSystemRequired);
    else
      PoClearPowerRequest(Object, PowerRequestSystemRequired);
  }
  else if ( (a2 & 1) != 0 )
  {
    v3 = 2;
  }
  result = a2 & 2;
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      result = PoSetPowerRequest(Object, PowerRequestDisplayRequired);
    else
      result = PoClearPowerRequest(Object, PowerRequestDisplayRequired);
  }
  else if ( (a2 & 2) != 0 )
  {
    v3 |= 1u;
  }
  v8 = a2 & 0x40;
  if ( (a3 & 0x40) != 0 )
  {
    if ( v8 )
      result = PoSetPowerRequest(Object, PowerRequestAwayModeRequired);
    else
      result = PoClearPowerRequest(Object, PowerRequestAwayModeRequired);
  }
  else if ( v8 )
  {
    v3 |= 4u;
  }
  if ( v3 )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v9 = *((_DWORD *)Object + 7);
    if ( (v9 & v3) != 0 )
    {
      *((_DWORD *)Object + 7) = v9 & ~v3;
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
    }
    result = KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
