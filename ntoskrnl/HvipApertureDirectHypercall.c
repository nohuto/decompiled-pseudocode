/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405B39F8
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B3844 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B38A4 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x140422360 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x140422370 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140D1BBE4 )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
