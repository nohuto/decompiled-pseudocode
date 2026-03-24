/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140777044
 * Callers:
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSuperfetchNotification @ 0x140777018 (PopDiagTraceSuperfetchNotification.c)
 *     PfPowerActionNotify @ 0x140991198 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140993C64 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7LL);
}
