/*
 * XREFs of HvlIsHypercallOverlayLocked @ 0x14053D4D8
 * Callers:
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

bool HvlIsHypercallOverlayLocked()
{
  return (HvlEnlightenments & 0x100000) != 0;
}
