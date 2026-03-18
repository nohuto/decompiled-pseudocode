/*
 * XREFs of HvipApertureAmdVmcall @ 0x14042A700
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B5EA8 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
