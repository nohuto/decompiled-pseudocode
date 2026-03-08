/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x14098CC08
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058B44C (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3LL, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
