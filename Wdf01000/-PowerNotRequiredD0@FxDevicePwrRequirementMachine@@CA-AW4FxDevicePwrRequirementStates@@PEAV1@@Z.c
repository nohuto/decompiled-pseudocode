__int64 __fastcall FxDevicePwrRequirementMachine::PowerNotRequiredD0(FxDevicePwrRequirementMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(
    This->m_PoxInterface->m_PkgPnp,
    (FxPowerPolicyEvent)(_InterlockedCompareExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0, 0) != 0
                       ? PwrPolDevicePowerNotRequiredDirected
                       : PwrPolDevicePowerNotRequired),
    0);
  return 15LL;
}
