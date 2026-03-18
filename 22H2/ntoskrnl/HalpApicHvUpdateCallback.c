/*
 * XREFs of HalpApicHvUpdateCallback @ 0x14051AC00
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicSetupRegisterAccess @ 0x14037826C (HalpApicSetupRegisterAccess.c)
 */

__int64 HalpApicHvUpdateCallback()
{
  return HalpApicSetupRegisterAccess();
}
