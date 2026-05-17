/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800DE7F8
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180064070 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
