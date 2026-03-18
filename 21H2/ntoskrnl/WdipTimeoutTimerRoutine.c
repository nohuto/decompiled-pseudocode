/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x14025CB00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
