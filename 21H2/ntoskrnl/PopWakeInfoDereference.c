/*
 * XREFs of PopWakeInfoDereference @ 0x14038BB68
 * Callers:
 *     PopTimeoutWakeTracking @ 0x14038B958 (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x14038BAD4 (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x14056F420 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x14099952C (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
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
