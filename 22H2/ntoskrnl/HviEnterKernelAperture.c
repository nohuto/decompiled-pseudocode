/*
 * XREFs of HviEnterKernelAperture @ 0x1405B5CF4
 * Callers:
 *     HviCopyMemory @ 0x1405B5BF4 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B5C70 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042A6E0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405B5DA0 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405B5EA8 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140D1BF2D;
  if ( !byte_140D1BF2D )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C0DC50 )
  {
    if ( byte_140D1BF2E )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
