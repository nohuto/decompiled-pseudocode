/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1402D3A10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140C24708, 1LL);
}
