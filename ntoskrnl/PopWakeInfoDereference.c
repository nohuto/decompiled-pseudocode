/*
 * XREFs of PopWakeInfoDereference @ 0x14058C3B8
 * Callers:
 *     PopDereferenceWakeInfos @ 0x14058BF4C (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140984574 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140984674 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409909E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopIsMostRecentWakeAttended @ 0x140A9DF8C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140A9DFB8 (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
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
