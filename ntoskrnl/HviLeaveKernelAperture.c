/*
 * XREFs of HviLeaveKernelAperture @ 0x1405B38A4
 * Callers:
 *     HviCopyMemory @ 0x1405B3744 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B37C0 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140422350 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x1405B39F8 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C0DB50 )
  {
    if ( byte_140D1BBE5 )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
