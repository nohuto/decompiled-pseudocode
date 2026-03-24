/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1407753FC
 * Callers:
 *     PopPrepareSleep @ 0x140382E4C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
