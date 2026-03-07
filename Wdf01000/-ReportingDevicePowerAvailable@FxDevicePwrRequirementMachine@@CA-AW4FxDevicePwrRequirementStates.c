__int64 __fastcall FxDevicePwrRequirementMachine::ReportingDevicePowerAvailable(FxDevicePwrRequirementMachine *This)
{
  PoFxReportDevicePoweredOn(This->m_PoxInterface->m_PoHandle);
  return 2LL;
}
