/*
 * XREFs of EtwpQueuePerfMemInfoWorkItem @ 0x14045F908
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14045F4B0 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall EtwpQueuePerfMemInfoWorkItem(struct _LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 1467446341LL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))EtwpPerfMemInfoWork;
    Pool2[1].List.Flink = a1;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
}
