/*
 * XREFs of PpmResetIdlePolicy @ 0x14039F868
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14039F2F0 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140583F90 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x14034ED1C (PpmScaleIdleStateValues.c)
 *     PpmApplyIdlePolicy @ 0x14039F8A4 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x14039F914 (PpmResetProcessorIdleAccounting.c)
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
