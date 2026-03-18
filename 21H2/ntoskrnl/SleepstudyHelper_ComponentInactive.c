/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1403B5600
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpSetBlockerActive @ 0x14036B250 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rsi
  int v4; // eax
  bool v6; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v9; // edx
  _DWORD *SchedulerAssist; // r9

  v1 = 0;
  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v4 = *((_DWORD *)SpinLock + 2);
    if ( (v4 & 0x10) != 0 )
    {
      v6 = (*((_DWORD *)SpinLock + 3))-- == 1;
      *((_DWORD *)SpinLock + 2) = v4 & 0xFFFFFFEF;
      if ( v6 )
        SshpSetBlockerActive((__int64)SpinLock, 0);
    }
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
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
