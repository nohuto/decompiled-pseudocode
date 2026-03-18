/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140991500
 * Callers:
 *     PopPrepareSleep @ 0x14058F50C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
