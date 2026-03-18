/*
 * XREFs of PpmResetIdlePolicy @ 0x1403D1DE4
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1403D1870 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1405C6FB0 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x14023BC48 (PpmScaleIdleStateValues.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403D1E20 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1403D1F00 (PpmApplyIdlePolicy.c)
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
