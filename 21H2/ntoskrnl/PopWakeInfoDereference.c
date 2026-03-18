/*
 * XREFs of PopWakeInfoDereference @ 0x140397184
 * Callers:
 *     PopDereferenceWakeInfos @ 0x1403970F0 (PopDereferenceWakeInfos.c)
 *     PopNewWakeInfo @ 0x140A517EC (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
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
