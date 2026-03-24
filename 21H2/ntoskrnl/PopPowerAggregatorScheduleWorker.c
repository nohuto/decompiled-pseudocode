/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140776390
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775E14 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x14077A4A4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408EE678 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EEA60 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1408EFD90 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // eax

  *(_DWORD *)(a1 + 20) |= 2u;
  v1 = *(_DWORD *)(a1 + 20);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 20) = v1 | 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 4928), DelayedWorkQueue);
  }
}
