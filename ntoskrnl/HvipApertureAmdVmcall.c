/*
 * XREFs of HvipApertureAmdVmcall @ 0x140422370
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B39F8 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
