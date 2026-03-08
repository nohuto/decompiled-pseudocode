/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x140610C40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140C2B5C0, DelayedWorkQueue);
}
