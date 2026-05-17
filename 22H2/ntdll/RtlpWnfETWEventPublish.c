/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DE938
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007D520 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800850A0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
