/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x1403C2A80
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
 *     PopDiagTraceSleepStudyStart @ 0x140879BB0 (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x140998E5C (PopIdleCsStateChanged.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140C0B748;
  v4 = v2;
  if ( a1 )
    v3 = dword_140C0B744;
  KxReleaseSpinLock((volatile signed __int64 *)&PopModernStandbyTransitionInfo);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
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
  __writecr8(v4);
  return v3;
}
