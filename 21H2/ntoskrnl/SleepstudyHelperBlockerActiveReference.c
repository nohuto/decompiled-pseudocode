/*
 * XREFs of SleepstudyHelperBlockerActiveReference @ 0x14036B190
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1407EDF80 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestStatsSetActive @ 0x1407EFF14 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpSetBlockerActive @ 0x14036B250 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveReference(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  PKSPIN_LOCK v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  KSPIN_LOCK *v6; // rcx
  PKSPIN_LOCK v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8

  v1 = 0;
  if ( SpinLock )
  {
    v3 = SpinLock;
    while ( 1 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(v3);
      if ( v3 != SpinLock && ++*((_DWORD *)v3 + 4) != 1 )
        break;
      ++*((_DWORD *)v3 + 3);
      v6 = v3;
      if ( *((_DWORD *)v3 + 3) != 1 )
        goto LABEL_5;
      LOBYTE(v4) = 1;
      SshpSetBlockerActive(v3, v4);
      KxReleaseSpinLock(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      v3 = (PKSPIN_LOCK)v3[36];
      if ( !v3 )
        return v1;
    }
    v6 = v3;
LABEL_5:
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v17 = v15->SchedulerAssist;
          v13 = (v16 & v17[5]) == 0;
          v17[5] &= v16;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
    }
    __writecr8(v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
