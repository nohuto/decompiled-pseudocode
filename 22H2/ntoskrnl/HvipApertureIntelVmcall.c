/*
 * XREFs of HvipApertureIntelVmcall @ 0x14042A6F0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B5EA8 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
