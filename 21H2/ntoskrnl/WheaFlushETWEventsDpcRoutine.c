/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x140645E40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140C0FAA0, DelayedWorkQueue);
}
