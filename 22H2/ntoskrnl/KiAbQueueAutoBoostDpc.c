/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140307C18
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402078D4 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2760 (KiComputeEffectivePriority.c)
 *     KeInsertPriQueue @ 0x1402B7EF0 (KeInsertPriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B8400 (KiSetBasePriorityAndClearDecrement.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiAbProcessThreadPriorityModification @ 0x1403077F0 (KiAbProcessThreadPriorityModification.c)
 *     KiUpdateThreadPriority @ 0x140307A60 (KiUpdateThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x140319118 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031AEEC (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiAbQueueAutoBoostDpc(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 35744) )
  {
    result = KiInsertQueueDpc(a1 + 35712, a1, 0LL, 0LL, 0);
    *(_QWORD *)(a1 + 35744) = 1LL;
  }
  return result;
}
