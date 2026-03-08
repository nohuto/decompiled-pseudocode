/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA4CD8
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405972BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
