/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1405AF498
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405AEE00 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405AF020 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405AF0E0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405AF170 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405AF190 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
    v1 = *(unsigned __int8 *)(a1 + 40);
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 56));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v1);
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 56));
  }
  return 1;
}
