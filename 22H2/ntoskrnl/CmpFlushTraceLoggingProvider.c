/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x140A127FC
 * Callers:
 *     CmShutdownSystem2 @ 0x140615E8C (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140677370 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1407E29E4 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C04390);
}
