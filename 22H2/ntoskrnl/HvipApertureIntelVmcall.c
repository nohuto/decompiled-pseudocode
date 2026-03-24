/*
 * XREFs of HvipApertureIntelVmcall @ 0x140408D60
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405947CC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
