/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14053FE3C
 * Callers:
 *     KiSetFeatureBits @ 0x140A8DD24 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
