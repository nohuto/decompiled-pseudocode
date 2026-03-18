/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x14040FC2C
 * Callers:
 *     KiUpdateThreadSchedulingProperties @ 0x140204EA0 (KiUpdateThreadSchedulingProperties.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402064E4 (KiCheckForEffectivePriorityChange.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiCommitRescheduleContextEntry @ 0x140242E70 (KiCommitRescheduleContextEntry.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2760 (KiComputeEffectivePriority.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BDE28 (KiInitializeForegroundBoostThread.c)
 *     KiUpdateThreadPriority @ 0x140307A60 (KiUpdateThreadPriority.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1403084DC (KiTransitionSchedulingGroupGeneration.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
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
