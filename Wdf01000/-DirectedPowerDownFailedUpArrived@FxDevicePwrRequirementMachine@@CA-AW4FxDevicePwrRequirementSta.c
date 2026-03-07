__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerDownFailedUpArrived(
        FxDevicePwrRequirementMachine *This,
        __int64 a2,
        unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PoxInterface->m_PkgPnp, PwrPolDeviceDirectedPowerUp, a3);
  return 14LL;
}
