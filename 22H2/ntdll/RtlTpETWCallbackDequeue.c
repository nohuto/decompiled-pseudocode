/*
 * XREFs of RtlTpETWCallbackDequeue @ 0x18011370C
 * Callers:
 *     RtlpTpWorkCallback @ 0x180070B60 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180070DD0 (RtlpTpWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlTpETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
