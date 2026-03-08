/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x14040A730
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x140238B34 (KiInitializeForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402AB0D4 (KiTransitionSchedulingGroupGeneration.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402AF670 (KiUpdateThreadSchedulingProperties.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402F2428 (KiCheckForEffectivePriorityChange.c)
 *     KiComputeEffectivePriority @ 0x140342350 (KiComputeEffectivePriority.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
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
