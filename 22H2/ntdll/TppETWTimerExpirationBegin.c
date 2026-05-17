/*
 * XREFs of TppETWTimerExpirationBegin @ 0x180112AC0
 * Callers:
 *     TppTimerQueueExpiration @ 0x180011AE0 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpirationBegin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
