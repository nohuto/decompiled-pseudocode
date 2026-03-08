/*
 * XREFs of IoQueueWorkItemEx @ 0x140341350
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x14033EDC0 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x140341380 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v5; // rax

  v5 = IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
