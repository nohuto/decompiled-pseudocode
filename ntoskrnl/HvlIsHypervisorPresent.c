/*
 * XREFs of HvlIsHypervisorPresent @ 0x14053D4EC
 * Callers:
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

_BOOL8 HvlIsHypervisorPresent()
{
  return HvlHypervisorConnected != 0;
}
