/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1409ABAE0
 * Callers:
 *     TtmiCreateTerminal @ 0x1409AAE58 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1409AB810 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A4B54 (TtmiScheduleSessionWorker.c)
 *     TtmpResetEvaluationTimer @ 0x1409AB9E4 (TtmpResetEvaluationTimer.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
