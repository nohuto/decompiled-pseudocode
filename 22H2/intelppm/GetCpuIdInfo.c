/*
 * XREFs of GetCpuIdInfo @ 0x1C00047C0
 * Callers:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001D14 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001D90 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x1C0001E04 (IsHwpSupported.c)
 *     IsHgsInterruptSupported @ 0x1C0001E78 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001EF0 (IsHwpNativeInterruptSupported.c)
 *     ValidatePStateCapability @ 0x1C00043D0 (ValidatePStateCapability.c)
 *     IsTurboModeSupported @ 0x1C0004470 (IsTurboModeSupported.c)
 *     IsHwpFastMsrSupported @ 0x1C0006D68 (IsHwpFastMsrSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006E08 (IsHwpHighestInterruptSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006E84 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006F24 (IsHwpPackageControlSupported.c)
 *     IsProcSpeedStepCapable @ 0x1C0006FA0 (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C00219A0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C0021A5C (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C0027250 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C002BC60 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C002BD20 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C003C44C (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
