void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry(struct _KEVENT *SpinLock, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v3 = (struct _LIST_ENTRY *)(a2 + 72);
  v4 = ExAcquireSpinLockExclusive(&SpinLock->Header.Lock);
  v3->Flink = (struct _LIST_ENTRY *)((char *)&SpinLock->Header.WaitListHead.Blink->Flink->Flink + 1);
  SpinLock->Header.WaitListHead.Blink->Flink = v3;
  SpinLock->Header.WaitListHead.Blink = v3;
  if ( v3->Flink == (struct _LIST_ENTRY *)1 )
    KeSetEvent(SpinLock + 1, 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock->Header.Lock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
}
