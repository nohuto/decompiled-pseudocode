__int64 __fastcall SleepstudyHelper_ComponentActive(KSPIN_LOCK *a1)
{
  unsigned __int64 v2; // rdi
  unsigned int active; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  if ( a1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(a1);
    active = SleepstudyHelper_ComponentActiveLocked(a1);
    KxReleaseSpinLock((volatile signed __int64 *)a1);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return active;
}
