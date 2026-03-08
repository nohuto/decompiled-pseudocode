/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x140A0FAB0
 * Callers:
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140674D20 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1407333FC (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C04328);
}
