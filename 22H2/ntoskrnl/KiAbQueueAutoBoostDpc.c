/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x1402DE7EC
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1402307C0 (KiUpdateThreadPriority.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402422D0 (KiTryUnwaitThreadWithPriority.c)
 *     KiRemoveBoostThread @ 0x14024A840 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140277A2C (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     ExpAcquireResourceSharedLite @ 0x1402CC770 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402CD0C0 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1402DD27C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbProcessThreadPriorityModification @ 0x1402DE6A0 (KiAbProcessThreadPriorityModification.c)
 *     KiAbThreadBoostIoPriority @ 0x1402DE724 (KiAbThreadBoostIoPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14035B22C (KiSetBasePriorityAndClearDecrement.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[542].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 542, SystemArgument1, 0LL);
    SystemArgument1[542].DeferredContext = (PVOID)1;
  }
  return result;
}
