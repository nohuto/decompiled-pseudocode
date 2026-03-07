__int64 __fastcall MiConsumeOverCommit(KSPIN_LOCK *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  KSPIN_LOCK v7; // rax
  KSPIN_LOCK v8; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-28h] BYREF

  memset(&v16, 0, sizeof(v16));
  v6 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 2053, &v16);
  v7 = a1[2197];
  v8 = v7 + a2;
  if ( v7 + a2 <= v7 || v8 + a3 < v8 || v8 + a3 > a1[2227] )
  {
    a1[2055] += a2;
    v6 = 1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v16);
  OldIrql = v16.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (v16.OldIrql + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v6;
}
