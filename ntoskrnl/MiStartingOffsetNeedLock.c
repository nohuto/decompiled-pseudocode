__int64 __fastcall MiStartingOffsetNeedLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r8
  KIRQL v5; // bl
  volatile LONG *v6; // rdi
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
  {
    v5 = 17;
    v6 = (volatile LONG *)(v2 + 72);
  }
  else
  {
    v6 = (volatile LONG *)(v2 + 72);
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  }
  v7 = MiStartingOffset(a1, a1[1], a2);
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
  return v7;
}
