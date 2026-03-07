__int64 __fastcall FxDevicePwrRequirementMachine::PowerRequiredDx(FxDevicePwrRequirementMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(
    This->m_PoxInterface->m_PkgPnp,
    (FxPowerPolicyEvent)(_InterlockedCompareExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0, 0) != 0
                       ? PwrPolDevicePowerRequiredDirected
                       : PwrPolDevicePowerRequired),
    0);
  return 15LL;
}
