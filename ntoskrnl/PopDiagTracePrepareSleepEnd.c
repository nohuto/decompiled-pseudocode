/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x14098E450
 * Callers:
 *     PopPrepareSleep @ 0x14058CFDC (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
