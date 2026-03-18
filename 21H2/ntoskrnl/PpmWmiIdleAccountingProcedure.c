/*
 * XREFs of PpmWmiIdleAccountingProcedure @ 0x1405D87D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void PpmWmiIdleAccountingProcedure()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1701602409LL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PpmWmiIdleAccountingWork;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
}
