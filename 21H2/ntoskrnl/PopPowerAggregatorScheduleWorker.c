/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140776550
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x14077A664 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408EE7D8 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EEBC0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1408EFEF0 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
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
