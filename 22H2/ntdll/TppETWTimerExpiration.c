/*
 * XREFs of TppETWTimerExpiration @ 0x180112A20
 * Callers:
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpiration()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
