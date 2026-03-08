/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1409BF320
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405AEB80 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
