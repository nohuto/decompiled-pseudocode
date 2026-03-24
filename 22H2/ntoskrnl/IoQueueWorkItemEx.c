/*
 * XREFs of IoQueueWorkItemEx @ 0x14030DB40
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140206630 (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemFromIo @ 0x14030DB68 (ExQueueWorkItemFromIo.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  v4 = IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v4);
}
