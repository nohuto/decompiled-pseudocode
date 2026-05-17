/*
 * XREFs of TppETWTimerSet @ 0x180112B3C
 * Callers:
 *     TppSetTimer @ 0x1800139EC (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWTimerSet()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
