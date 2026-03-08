/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140AA4F90
 * Callers:
 *     PopZeroHiberFile @ 0x140986490 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
