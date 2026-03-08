/*
 * XREFs of IoQueueWorkItem @ 0x140342ED0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x14033EDC0 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x140341380 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v5; // rax

  IoWorkItem->Type = 0;
  v5 = IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
