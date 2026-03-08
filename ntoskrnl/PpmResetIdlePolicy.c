/*
 * XREFs of PpmResetIdlePolicy @ 0x14039AFC8
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14039AA50 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140581A60 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x1402ED878 (PpmScaleIdleStateValues.c)
 *     PpmApplyIdlePolicy @ 0x14039B004 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x14039B074 (PpmResetProcessorIdleAccounting.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues((__int64)a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
