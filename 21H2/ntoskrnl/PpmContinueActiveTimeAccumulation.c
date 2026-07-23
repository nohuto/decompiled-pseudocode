/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14026996C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140269E70 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x1402699A0 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C8970 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
