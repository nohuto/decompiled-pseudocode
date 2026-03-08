/*
 * XREFs of NtUserTraceLoggingSendMixedModeTelemetry @ 0x1C0011860
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C001189C (-TraceLoggingSendMixedModeTelemetry@@YAHXZ.c)
 */

__int64 NtUserTraceLoggingSendMixedModeTelemetry()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)TraceLoggingSendMixedModeTelemetry();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
