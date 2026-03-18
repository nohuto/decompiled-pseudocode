/*
 * XREFs of HviLeaveKernelAperture @ 0x1405B5D54
 * Callers:
 *     HviCopyMemory @ 0x1405B5BF4 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B5C70 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042A6E0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x1405B5EA8 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C0DC50 )
  {
    if ( byte_140D1BF2E )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
