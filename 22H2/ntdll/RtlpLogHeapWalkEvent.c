/*
 * XREFs of RtlpLogHeapWalkEvent @ 0x18010A898
 * Callers:
 *     RtlpWalkHeap @ 0x1800F4DBC (RtlpWalkHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapWalkEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
