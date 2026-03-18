/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140AA81C0
 * Callers:
 *     PopZeroHiberFile @ 0x140989540 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
