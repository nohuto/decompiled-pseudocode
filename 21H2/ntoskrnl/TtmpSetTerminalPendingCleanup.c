/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1408FE0C0
 * Callers:
 *     TtmiCreateTerminal @ 0x1408FD52C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDDF0 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408FDFC4 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1408FF140 (TtmiScheduleSessionWorker.c)
 */

void __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  TtmpResetEvaluationTimer((PADAPTER_OBJECT)a2, 0LL);
}
