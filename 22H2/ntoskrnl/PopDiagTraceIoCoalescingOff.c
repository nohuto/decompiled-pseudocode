/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408EA97C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EB04 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140364318 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
