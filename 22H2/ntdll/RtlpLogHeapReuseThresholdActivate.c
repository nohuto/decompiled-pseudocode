/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x18010A2F4
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800235A0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReuseThresholdActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
