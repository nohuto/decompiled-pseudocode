__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerUpComplete(FxDevicePwrRequirementMachine *This)
{
  _InterlockedExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0);
  return 15LL;
}
