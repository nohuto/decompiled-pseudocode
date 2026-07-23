/*
 * XREFs of SleepstudyHelperBlockerActiveReference @ 0x14023AEB0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     SshpSetBlockerActive @ 0x14023AF30 (SshpSetBlockerActive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveReference(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  PKSPIN_LOCK v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = 0;
  v2 = SpinLock;
  if ( SpinLock )
  {
    do
    {
      v3 = KeAcquireSpinLockRaiseToDpc(v2);
      ++*((_DWORD *)v2 + 3);
      v5 = v3;
      if ( *((_DWORD *)v2 + 3) == 1 )
      {
        LOBYTE(v4) = 1;
        SshpSetBlockerActive(v2, v4);
      }
      KxReleaseSpinLock(v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      v2 = (PKSPIN_LOCK)v2[35];
    }
    while ( v2 );
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
