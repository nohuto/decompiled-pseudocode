/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x14058D058
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x14058CF90 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140987AC8 (PopUpdatePowerActionWatchdogTimeouts.c)
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

  if ( a1 > 2 )
    return;
  if ( a1 == 1 )
    PopUpdatePowerActionWatchdogTimeouts();
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C3CE78);
  if ( dword_140C3CF04 != a1 )
  {
    if ( dword_140C3CF04 )
    {
      if ( !KeCancelTimer(&stru_140C3CEC0) )
      {
        PopPowerActionWatchdog();
        goto LABEL_15;
      }
      qword_140C3CF08 = 0LL;
      dword_140C3CF04 = 0;
    }
    if ( a1 )
    {
      v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
      if ( v3 )
      {
        qword_140C3CF08 = MEMORY[0xFFFFF78000000008];
        dword_140C3CF10 = v3;
        dword_140C3CF04 = a1;
        KiSetTimerEx((__int64)&stru_140C3CEC0, -10000000LL * v3, 0, 0, (__int64)&dword_140C3CE80);
      }
    }
  }
LABEL_15:
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3CE78);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
}
