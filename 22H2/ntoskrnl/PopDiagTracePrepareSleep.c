/*
 * XREFs of PopDiagTracePrepareSleep @ 0x1407753E0
 * Callers:
 *     PopPrepareSleep @ 0x140382E4C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
