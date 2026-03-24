/*
 * XREFs of HviEnterKernelAperture @ 0x14059461C
 * Callers:
 *     HviCopyMemory @ 0x14059451C (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594598 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140408D50 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405946C4 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405947CC (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140CFA34D;
  if ( !byte_140CFA34D )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C12D02 )
  {
    if ( byte_140CFA34E )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
