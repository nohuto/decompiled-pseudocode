/*
 * XREFs of TppETWTimerCancelled @ 0x1801129A0
 * Callers:
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelled()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
