/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1409BEB64
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
