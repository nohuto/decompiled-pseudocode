/*
 * XREFs of HalpTimerScaleCounter @ 0x140395BF0
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140221150 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x1402276F0 (KiUpdateTime.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KiRetireDpcList @ 0x140246020 (KiRetireDpcList.c)
 *     HalpSetTimer @ 0x14024DCEC (HalpSetTimer.c)
 *     HalCalibratePerformanceCounter @ 0x140384030 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1403863E0 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A566C (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403B0A68 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BFA30 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFBE0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x1404C0800 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3500 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax

  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( a2 == 14318180 )
    v4 = a1 / 0xDA7A64;
  else
    v4 = a1 / a2;
  v5 = a3 * (a1 - a2 * v4);
  if ( a2 == 14318180 )
    v6 = v5 / 0xDA7A64;
  else
    v6 = v5 / a2;
  return a3 * v4 + v6;
}
