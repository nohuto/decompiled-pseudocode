__int64 HalpAcpiInitDiscard()
{
  off_140C02148 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140C01CB0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
