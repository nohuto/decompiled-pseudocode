__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerUpFailedComplete(FxDevicePwrRequirementMachine *This)
{
  _InterlockedExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0);
  return 6LL;
}
