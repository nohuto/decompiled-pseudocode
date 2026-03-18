/*
 * XREFs of PopPrepareSleep @ 0x14058F50C
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleep @ 0x1409914E4 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140991500 (PopDiagTracePrepareSleepEnd.c)
 *     PopCheckpointSystemSleep @ 0x140AAA5A8 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopPrepareSleep(__int64 a1)
{
  PopDiagTracePrepareSleep();
  PopCheckpointSystemSleep(54LL);
  *(_DWORD *)(a1 + 16) = 13;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTracePrepareSleepEnd();
  return PopCheckpointSystemSleep(55LL);
}
