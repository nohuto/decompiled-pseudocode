/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x14039A88C
 * Callers:
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x14080A52C (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x14099CFAC (PopIdleCsStateChanged.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140C09760;
  v4 = v2;
  if ( a1 )
    v3 = dword_140C0975C;
  KxReleaseSpinLock(&PopModernStandbyTransitionInfo);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
