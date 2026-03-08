/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140873100
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14073B5A4 (PopUmpoProcessPowerMessage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140990BB0 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140990C08 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140990F20 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x140994E00 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 | 2;
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v1 | 3;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 4400), DelayedWorkQueue);
  }
}
