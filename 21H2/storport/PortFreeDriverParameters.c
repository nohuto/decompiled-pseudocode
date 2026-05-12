/*
 * XREFs of PortFreeDriverParameters @ 0x1C007C224
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0030D48 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
