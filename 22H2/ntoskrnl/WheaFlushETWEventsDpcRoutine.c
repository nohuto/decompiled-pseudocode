/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x140613060
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140C2BA20, DelayedWorkQueue);
}
