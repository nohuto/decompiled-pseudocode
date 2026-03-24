/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x14032CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
