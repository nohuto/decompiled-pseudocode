/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800DEA74
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180063BAC (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
