/*
 * XREFs of TppETWPoolCreate @ 0x1801127A8
 * Callers:
 *     TpAllocPoolInternal @ 0x180062D04 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWPoolCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
