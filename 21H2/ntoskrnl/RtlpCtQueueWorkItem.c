/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1409197C4
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E810 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
