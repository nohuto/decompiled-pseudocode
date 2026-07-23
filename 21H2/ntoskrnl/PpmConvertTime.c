/*
 * XREFs of PpmConvertTime @ 0x14026A1CC
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x1402699A0 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140269E70 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402C5110 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmParkApplyPolicy @ 0x1403C20B4 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403C4CE4 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403C9684 (PpmConvertTimeFrom.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14056694C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140567B80 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140567E20 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140570650 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140571534 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x1405771D8 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x1405772F0 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1405774C0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140577700 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x140A6D6A4 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A6F89C (PopInitDripsWakeAccounting.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 */

ULONGLONG __fastcall PpmConvertTime(ULONGLONG a1, __int64 a2, ULONGLONG a3)
{
  ULONGLONG v4; // r10
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v4 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( RtlULongLongMult(a1, a3, &pullResult) < 0 )
      return a3 * (v6 / v7) + a3 * (v6 % v7) / v7;
    else
      return pullResult / v7;
  }
  return v4;
}
