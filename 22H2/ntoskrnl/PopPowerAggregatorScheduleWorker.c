/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140875FC0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A7164 (PopUmpoProcessPowerMessage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407A9984 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993C60 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140993CB8 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140993FD0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x140997EB0 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
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
