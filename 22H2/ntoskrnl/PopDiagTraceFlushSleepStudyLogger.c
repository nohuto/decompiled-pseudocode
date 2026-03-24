/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140998F9C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D0BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
