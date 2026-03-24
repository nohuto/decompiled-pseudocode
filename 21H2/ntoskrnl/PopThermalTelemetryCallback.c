/*
 * XREFs of PopThermalTelemetryCallback @ 0x14056F8D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22EC8, DelayedWorkQueue);
}
