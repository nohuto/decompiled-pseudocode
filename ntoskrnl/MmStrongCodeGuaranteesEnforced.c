/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140B72910
 * Callers:
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140B14BF4 (KeFreeInitializationCode.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned int)MiFlags >> 15) & 1;
}
