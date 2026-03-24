/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x140520894
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
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x14035B5EC (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035D8C8 (KeUpdateThreadSchedulingProperties.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeTransitionProcessorParkState @ 0x1405253EC (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetSchedulerAssistPriority(volatile signed __int32 *a1, int a2, char a3)
{
  __int64 result; // rax
  char v5; // cl

  LODWORD(result) = *a1;
  if ( !a3 )
    LODWORD(result) = (unsigned int)result >> 8;
  result = (unsigned __int8)result;
  v5 = a3 == 0 ? 8 : 0;
  if ( a2 != (unsigned __int8)result )
  {
    if ( a2 <= (unsigned __int8)result )
      return (unsigned int)_InterlockedExchangeAdd(a1, -(((unsigned __int8)result - a2) << v5));
    else
      _InterlockedExchangeAdd(a1, (a2 - (unsigned __int8)result) << v5);
  }
  return result;
}
