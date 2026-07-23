/*
 * XREFs of PopThermalTelemetryCallback @ 0x14056FB10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22F48, DelayedWorkQueue);
}
