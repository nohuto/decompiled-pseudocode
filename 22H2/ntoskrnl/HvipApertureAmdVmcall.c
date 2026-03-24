/*
 * XREFs of HvipApertureAmdVmcall @ 0x140408D70
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405947CC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
