/*
 * XREFs of PopPrepareSleep @ 0x14058CFDC
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleep @ 0x14098E434 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x14098E450 (PopDiagTracePrepareSleepEnd.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
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
