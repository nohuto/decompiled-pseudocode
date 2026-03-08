/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14035845C
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x140238B34 (KiInitializeForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeInsertPriQueue @ 0x14033F6C0 (KeInsertPriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14033FBD0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiComputeEffectivePriority @ 0x140342350 (KiComputeEffectivePriority.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140356D7C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140357A54 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbThreadBoostIoPriority @ 0x140358384 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
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
