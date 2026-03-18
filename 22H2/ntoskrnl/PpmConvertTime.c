/*
 * XREFs of PpmConvertTime @ 0x1402553F0
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140251FC0 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x1402552E4 (PpmUpdateTimeAccumulation.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255950 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     PpmParkApplyPolicy @ 0x140390A80 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x14039F8A4 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeTo @ 0x1403A6A74 (PpmConvertTimeTo.c)
 *     PpmConvertTimeFrom @ 0x1403A8E68 (PpmConvertTimeFrom.c)
 *     PoNotifySystemTimeSet @ 0x1403B5E38 (PoNotifySystemTimeSet.c)
 *     PopCalculateIdleInformation @ 0x1403C76E0 (PopCalculateIdleInformation.c)
 *     PpmGetThroughputInfoCallback @ 0x140462B40 (PpmGetThroughputInfoCallback.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140584E18 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140585EA0 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1405860E0 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x1405913C4 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405922E4 (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslateIdleAccounting @ 0x140597FE0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140598218 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     PopCalculateWakeTimeAdjustment @ 0x140987218 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x14098F8D8 (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA795C (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AAA724 (PopSstDiagInitializeResumeTimer.c)
 *     PpmInitIdlePolicy @ 0x140B68458 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140B6E1D8 (PopInitDripsWakeAccounting.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( is_mul_ok(a1, a3) )
    return a1 * (unsigned __int128)a3 / a2;
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
