/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140989840
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x140A9FF34 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140AAA5A8 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7LL);
}
