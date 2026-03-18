/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140B76E00
 * Callers:
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140B18BF4 (KeFreeInitializationCode.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned int)MiFlags >> 15) & 1;
}
