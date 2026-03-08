/*
 * XREFs of PopThermalTelemetryCallback @ 0x14058DAC0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C508, DelayedWorkQueue);
}
