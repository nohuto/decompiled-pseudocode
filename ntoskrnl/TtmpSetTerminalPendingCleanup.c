/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1409A8A60
 * Callers:
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1409A8790 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmpResetEvaluationTimer @ 0x1409A8964 (TtmpResetEvaluationTimer.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
