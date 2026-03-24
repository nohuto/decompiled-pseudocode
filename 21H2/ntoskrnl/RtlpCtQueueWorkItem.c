/*
 * XREFs of RtlpCtQueueWorkItem @ 0x140919664
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E5E0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
