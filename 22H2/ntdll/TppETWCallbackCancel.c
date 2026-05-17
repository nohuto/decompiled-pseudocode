/*
 * XREFs of TppETWCallbackCancel @ 0x180112414
 * Callers:
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180085320 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x1800857F0 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180111AD0 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
