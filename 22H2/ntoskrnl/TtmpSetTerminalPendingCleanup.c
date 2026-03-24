/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1408FE110
 * Callers:
 *     TtmiCreateTerminal @ 0x1408FD57C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDE40 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408FE014 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1408FF190 (TtmiScheduleSessionWorker.c)
 */

void __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  TtmpResetEvaluationTimer((PADAPTER_OBJECT)a2, 0LL);
}
