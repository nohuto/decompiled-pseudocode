/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1403D15E0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3E728, DelayedWorkQueue);
}
