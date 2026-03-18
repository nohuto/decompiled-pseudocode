/*
 * XREFs of PopWakeInfoDereference @ 0x14058E8E8
 * Callers:
 *     PopDereferenceWakeInfos @ 0x14058E47C (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140987624 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140987724 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993A90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA113C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140AA1168 (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
