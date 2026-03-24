/*
 * XREFs of PopThermalTelemetryCallback @ 0x14056F810
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22F28, DelayedWorkQueue);
}
