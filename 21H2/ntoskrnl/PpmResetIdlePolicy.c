/*
 * XREFs of PpmResetIdlePolicy @ 0x1403C4BC8
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1403C4640 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140565900 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x140399164 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C4C04 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1403C4CE4 (PpmApplyIdlePolicy.c)
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
