/*
 * XREFs of PpmPerfTelemetryCallback @ 0x14032CC50
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140C24728, 1LL);
}
