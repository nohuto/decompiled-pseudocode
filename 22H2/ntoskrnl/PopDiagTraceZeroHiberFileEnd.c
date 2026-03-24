/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1409B2630
 * Callers:
 *     PopZeroHiberFile @ 0x1408E7514 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
