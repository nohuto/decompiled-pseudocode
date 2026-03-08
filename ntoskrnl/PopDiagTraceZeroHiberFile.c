/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140AA4F74
 * Callers:
 *     PopZeroHiberFile @ 0x140986490 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
