/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180112C78
 * Callers:
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppWorkerSwitchNode @ 0x18004E904 (TppWorkerSwitchNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
