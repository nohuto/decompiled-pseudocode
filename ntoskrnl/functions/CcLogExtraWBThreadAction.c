__int64 __fastcall CcLogExtraWBThreadAction(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // r12d
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // r11
  int v13; // eax
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+30h] [rbp-38h] BYREF

  memset(&v16, 0, sizeof(v16));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &v16);
  v6 = *(_QWORD *)(a1 + 1056);
  v7 = *(_QWORD *)(a1 + 1080);
  v8 = *(_DWORD *)(a2 + 152);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return CcPerfLogExtraWBThreadAction(a3, v8, v6, v7, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 17216LL));
}
