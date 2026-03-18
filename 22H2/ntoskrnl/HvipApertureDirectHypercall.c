/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405B5EA8
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B5CF4 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B5D54 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x14042A6F0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x14042A700 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140D1BF2C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
