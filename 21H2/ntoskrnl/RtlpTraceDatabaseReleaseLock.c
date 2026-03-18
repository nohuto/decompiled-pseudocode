/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1405EE4E0
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405EDE20 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405EE040 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405EE110 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405EE1A0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405EE1C0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 56));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
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
    }
    __writecr8(v1);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 56));
  }
  return 1;
}
