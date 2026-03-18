/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x1407E29E4
 * Callers:
 *     CmpDoReconcileNextHive @ 0x140750F50 (CmpDoReconcileNextHive.c)
 *     CmpFlushTraceLoggingProvider @ 0x140A127FC (CmpFlushTraceLoggingProvider.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x140A20278 (CmpSendUnsupportedOperationTelemetryEvent.c)
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
