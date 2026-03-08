/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x140302F80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
