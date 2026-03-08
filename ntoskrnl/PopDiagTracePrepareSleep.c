/*
 * XREFs of PopDiagTracePrepareSleep @ 0x14098E434
 * Callers:
 *     PopPrepareSleep @ 0x14058CFDC (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
