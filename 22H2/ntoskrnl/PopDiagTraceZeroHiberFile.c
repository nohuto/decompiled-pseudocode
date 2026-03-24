/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1409B2614
 * Callers:
 *     PopZeroHiberFile @ 0x1408E7514 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
