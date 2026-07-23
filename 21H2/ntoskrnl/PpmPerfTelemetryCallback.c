/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140251C80
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140C24768, 1LL);
}
