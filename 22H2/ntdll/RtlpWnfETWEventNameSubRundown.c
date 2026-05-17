/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800DE8A8
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x1800645E8 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
