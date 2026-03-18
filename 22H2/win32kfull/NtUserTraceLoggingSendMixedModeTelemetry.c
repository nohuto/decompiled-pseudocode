/*
 * XREFs of NtUserTraceLoggingSendMixedModeTelemetry @ 0x1C0012480
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C00124BC (-TraceLoggingSendMixedModeTelemetry@@YAHXZ.c)
 */

__int64 NtUserTraceLoggingSendMixedModeTelemetry()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = (int)TraceLoggingSendMixedModeTelemetry();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
