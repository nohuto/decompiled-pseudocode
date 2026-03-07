__int64 __fastcall WmipWriteWnodeToObject(PRKEVENT Event, unsigned int *Src)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  char v6; // bp
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // esi
  _DWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE v16[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v16, 0, 24);
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, v16);
  v4 = *(_QWORD *)&Event[3].Header.Lock;
  v5 = 0;
  if ( v4 )
  {
    WmipClearIrpObjectList(*(_QWORD *)&Event[3].Header.Lock);
    v4 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL) != 0);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v16);
  v6 = 1;
  OldIrql = v16[0].OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16[0].OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (v16[0].OldIrql + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( !v4 )
    return (unsigned int)WmipQueueNotification(Event);
  v13 = *Src;
  v14 = *(_DWORD **)(v4 + 24);
  if ( *Src <= *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) )
  {
    memmove(v14, Src, *Src);
    v6 = 0;
  }
  else
  {
    v14[12] = v13;
    *v14 = 56;
    v13 = 56;
    v14[11] = 32;
  }
  *(_QWORD *)(v4 + 56) = v13;
  *(_DWORD *)(v4 + 48) = 0;
  IofCompleteRequest((PIRP)v4, 0);
  if ( v6 )
    return (unsigned int)WmipQueueNotification(Event);
  return v5;
}
