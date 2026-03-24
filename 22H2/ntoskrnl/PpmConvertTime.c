/*
 * XREFs of PpmConvertTime @ 0x14034523C
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402207D0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220B90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x140221150 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x140344A10 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140344EE0 (PopGetIdleTimesCallback.c)
 *     PpmParkApplyPolicy @ 0x1403C18E4 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403C4514 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403C8E14 (PpmConvertTimeFrom.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14056664C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140567880 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140567B20 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14056FDE0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140570350 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140571234 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x140576ED8 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x140576FF0 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1405771C0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140577400 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x140A6C6A4 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A6E89C (PopInitDripsWakeAccounting.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024E708 (RtlULongLongMult.c)
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
