/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x14086A7A8
 * Callers:
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1405C9380 (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140724E14 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140C02130);
}
