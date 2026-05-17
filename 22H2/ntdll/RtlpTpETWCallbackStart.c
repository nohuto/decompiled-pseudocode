/*
 * XREFs of RtlpTpETWCallbackStart @ 0x1801125F4
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x1800635F0 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070B60 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180071C70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180072670 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800771B0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x1800795F0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180080780 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180113190 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
