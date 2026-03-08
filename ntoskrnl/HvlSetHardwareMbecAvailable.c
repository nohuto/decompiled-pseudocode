/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x140303154
 * Callers:
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
