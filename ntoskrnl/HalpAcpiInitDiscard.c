/*
 * XREFs of HalpAcpiInitDiscard @ 0x140B62AD4
 * Callers:
 *     HalpAcpiInitSystem @ 0x140A8D770 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140B62CA8 (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140C02148 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140C01CB0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
