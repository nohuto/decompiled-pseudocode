/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x1404F1B68
 * Callers:
 *     KiSetFeatureBits @ 0x14099C42C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
