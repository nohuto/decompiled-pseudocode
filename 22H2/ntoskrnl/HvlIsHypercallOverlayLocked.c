/*
 * XREFs of HvlIsHypercallOverlayLocked @ 0x14053F978
 * Callers:
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

bool HvlIsHypercallOverlayLocked()
{
  return (HvlEnlightenments & 0x100000) != 0;
}
