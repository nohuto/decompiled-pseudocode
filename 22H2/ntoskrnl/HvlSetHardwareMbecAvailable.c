/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14036EB04
 * Callers:
 *     KiSetFeatureBits @ 0x140A8DD24 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
