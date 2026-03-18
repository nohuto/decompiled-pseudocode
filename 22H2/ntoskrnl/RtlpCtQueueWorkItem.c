/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1409C2350
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1030 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
