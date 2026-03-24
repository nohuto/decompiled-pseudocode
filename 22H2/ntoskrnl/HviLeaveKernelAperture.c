/*
 * XREFs of HviLeaveKernelAperture @ 0x140594678
 * Callers:
 *     HviCopyMemory @ 0x14059451C (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594598 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140408D50 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x1405947CC (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C12D02 )
  {
    if ( byte_140CFA34E )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
