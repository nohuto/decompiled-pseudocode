/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x1407333FC
 * Callers:
 *     CmpDoReconcileNextHive @ 0x140732AC0 (CmpDoReconcileNextHive.c)
 *     CmpFlushTraceLoggingProvider @ 0x140A0FAB0 (CmpFlushTraceLoggingProvider.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x140A1D518 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

__int64 CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi
  __int64 result; // rax

  v0 = 0;
  v1 = (volatile __int32 *)&CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      result = CmpSendUnsupportedOperationTelemetryEvent((unsigned int)v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 27 );
  return result;
}
