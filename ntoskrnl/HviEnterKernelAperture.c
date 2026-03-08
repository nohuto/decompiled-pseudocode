/*
 * XREFs of HviEnterKernelAperture @ 0x1405B3844
 * Callers:
 *     HviCopyMemory @ 0x1405B3744 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B37C0 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140422350 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405B38F0 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405B39F8 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140D1BBE6;
  if ( !byte_140D1BBE6 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C0DB50 )
  {
    if ( byte_140D1BBE5 )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
