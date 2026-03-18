/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1409A3BE0
 * Callers:
 *     TtmiCreateTerminal @ 0x1409A2F78 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1409A3930 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1409A3B04 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4D70 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
