/*
 * XREFs of PopThermalTelemetryCallback @ 0x14058FFF0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C8E8, DelayedWorkQueue);
}
