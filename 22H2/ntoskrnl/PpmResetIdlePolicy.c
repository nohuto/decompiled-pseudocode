/*
 * XREFs of PpmResetIdlePolicy @ 0x1403C43F8
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1403C3E70 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140565600 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x140398914 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C4434 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1403C4514 (PpmApplyIdlePolicy.c)
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
