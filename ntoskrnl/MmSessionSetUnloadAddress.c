__int64 __fastcall MmSessionSetUnloadAddress(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+20h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 104);
  if ( !v2 )
    v2 = 1LL;
  v3 = CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[25];
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v9);
  if ( !*(_QWORD *)(v3 + 608) )
    *(_QWORD *)(v3 + 608) = v2;
  result = KxReleaseQueuedSpinLock(&v9);
  OldIrql = v9.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v9.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v9.OldIrql + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
