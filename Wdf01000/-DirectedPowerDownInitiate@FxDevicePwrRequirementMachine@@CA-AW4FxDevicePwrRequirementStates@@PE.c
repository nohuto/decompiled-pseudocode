__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerDownInitiate(
        FxDevicePwrRequirementMachine *This,
        __int64 a2,
        unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PoxInterface->m_PkgPnp, PwrPolDeviceDirectedPowerDown, a3);
  return 2LL;
}
