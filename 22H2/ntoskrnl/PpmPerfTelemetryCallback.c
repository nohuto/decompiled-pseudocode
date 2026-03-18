/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1403D6B00
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3EB48, DelayedWorkQueue);
}
