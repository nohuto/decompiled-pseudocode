/*
 * XREFs of TppETWCallbackDequeue @ 0x1801124BC
 * Callers:
 *     TppWorkpExecuteCallback @ 0x1800635F0 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180071C70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180072670 (TppTimerpExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180084B90 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180111F90 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
