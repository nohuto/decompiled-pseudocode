/*
 * XREFs of KiIsThreadRankNonZero @ 0x14024CDC0
 * Callers:
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1402307C0 (KiUpdateThreadPriority.c)
 *     KiRemoveBoostThread @ 0x14024A840 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x140256518 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140258040 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14025923C (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140259550 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140259970 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402C7A00 (KiSearchForNewThreadOnProcessor.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402DE540 (KiCheckForEffectivePriorityChange.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x14033A98C (KeQueryEffectiveBasePriorityThread.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x14035B5EC (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035D8C8 (KeUpdateThreadSchedulingProperties.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeQueryEffectivePriorityThread @ 0x1403763E0 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x1405253EC (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14099F9F0 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14024CE70 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int ThreadEffectiveRankNonZero; // ebx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v7 = CurrentPrcb->ScbOffset + v6;
    if ( v7 )
    {
      if ( a2 )
      {
        ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a1, v7, 0, 0, 0LL);
      }
      else
      {
        do
        {
          ThreadEffectiveRankNonZero = (*(unsigned __int8 *)(v7 + 112) >> 3) & 1;
          if ( ThreadEffectiveRankNonZero )
            break;
          v7 = *(_QWORD *)(v7 + 408);
        }
        while ( v7 );
      }
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(CurrentIrql);
  }
  return ThreadEffectiveRankNonZero != 0;
}
