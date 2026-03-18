/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x14038B9A0
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x1405D01F0 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407FF3B4 (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  if ( a1 <= 2 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C228D8);
    if ( dword_140C22964 != a1 )
    {
      if ( dword_140C22964 )
      {
        if ( !KeCancelTimer(&stru_140C22920) )
          PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        qword_140C22968 = 0LL;
        dword_140C22964 = 0;
      }
      if ( a1 )
      {
        v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
        if ( v3 )
        {
          qword_140C22968 = MEMORY[0xFFFFF78000000008];
          dword_140C22964 = a1;
          KiSetTimerEx((unsigned __int64)&stru_140C22920, -10000000LL * v3, 0, 0, (__int64)&dword_140C228E0);
        }
      }
    }
    KxReleaseSpinLock(&qword_140C228D8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
