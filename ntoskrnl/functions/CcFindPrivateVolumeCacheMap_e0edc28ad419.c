_QWORD *__fastcall CcFindPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *i; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-28h] BYREF

  memset(&v14, 0, sizeof(v14));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &v14);
  v5 = (_QWORD **)(a1 + 32);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    if ( *(i - 70) == a2 )
    {
      ++*((_DWORD *)i - 143);
      v4 = i - 72;
      break;
    }
  }
  KxReleaseQueuedSpinLock(&v14);
  OldIrql = v14.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v4;
}
