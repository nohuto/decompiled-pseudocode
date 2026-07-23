/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x140576740
 * Callers:
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408EB3E8 (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x1408F5794 (PopIdleCsStateChanged.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1, __int64 *a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( a1 )
  {
    v5 = dword_140C11754;
    v6 = 0LL;
  }
  else
  {
    v5 = dword_140C11758;
    v6 = qword_140C11760;
  }
  if ( a2 )
    *a2 = v6;
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
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
