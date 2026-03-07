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
