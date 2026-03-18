/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CC8E0
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01DF504 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DFD20 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01E0A80 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01E0E88 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void __fastcall PTPTelemetry::Usage::HandlePTPTelemetry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = v4 + 11824;
  if ( *(_DWORD *)(v4 + 11916) )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)(v4 + 11824));
    if ( *(__int64 *)(v5 + 96) > 0 || *(__int64 *)(v5 + 120) > 0 || *(_DWORD *)(v5 + 16) || *(_DWORD *)(v5 + 24) )
      TraceLoggingPTPUsageDetailsEvent((const struct tagTPTELEMSTATE *)v5, gliQpcFreq.QuadPart);
    memset((void *)v5, 0, 0x90uLL);
  }
}
