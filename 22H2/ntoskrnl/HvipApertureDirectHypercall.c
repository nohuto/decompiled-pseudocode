/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405947CC
 * Callers:
 *     HviEnterKernelAperture @ 0x14059461C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594678 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x140408D60 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x140408D70 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140CFA34C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
