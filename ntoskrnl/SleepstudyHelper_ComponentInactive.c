/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1402F0EC0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpSetBlockerActive @ 0x1402F11C8 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rsi
  int v4; // eax
  bool v5; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v9; // edx
  _DWORD *SchedulerAssist; // r9

  v1 = 0;
  if ( a1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
    v4 = *(_DWORD *)(a1 + 8);
    if ( (v4 & 0x10) != 0 )
    {
      v5 = (*(_DWORD *)(a1 + 12))-- == 1;
      *(_DWORD *)(a1 + 8) = v4 & 0xFFFFFFEF;
      if ( v5 )
        SshpSetBlockerActive(a1, 0LL);
    }
    KxReleaseSpinLock((volatile signed __int64 *)a1);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
