/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14053D99C
 * Callers:
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
