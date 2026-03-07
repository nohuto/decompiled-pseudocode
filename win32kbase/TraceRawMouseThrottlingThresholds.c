void __fastcall TraceRawMouseThrottlingThresholds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304) )
    InputTraceLogging::Mouse::RawMouseThrottlingThresholds();
}
