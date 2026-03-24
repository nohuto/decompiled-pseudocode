/*
 * XREFs of HalpEndOfBoot @ 0x1407D56D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x14099B48C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
