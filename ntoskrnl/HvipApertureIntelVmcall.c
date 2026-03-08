/*
 * XREFs of HvipApertureIntelVmcall @ 0x140422360
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B39F8 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
