/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140809508
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407F22AC (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140808A40 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140995D54 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140995E60 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x140996F70 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // eax

  *(_DWORD *)(a1 + 8) |= 2u;
  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v1 | 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 4400), DelayedWorkQueue);
  }
}
