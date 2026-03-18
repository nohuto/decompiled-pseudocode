/*
 * XREFs of IoQueueWorkItemEx @ 0x1402B93A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x1402B75F0 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x1402B93D0 (IopQueueWorkItemProlog.c)
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
