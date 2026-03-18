/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1403A15B0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C23A88, DelayedWorkQueue);
}
