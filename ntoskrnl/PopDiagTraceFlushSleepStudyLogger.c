/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140AA4CBC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405972BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
