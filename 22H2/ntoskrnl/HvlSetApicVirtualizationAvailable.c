/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x1404F1B58
 * Callers:
 *     KiSetFeatureBits @ 0x14099C42C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
