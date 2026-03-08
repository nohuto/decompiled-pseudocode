/*
 * XREFs of HalpEndOfBoot @ 0x140847FA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140A8D7E8 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
