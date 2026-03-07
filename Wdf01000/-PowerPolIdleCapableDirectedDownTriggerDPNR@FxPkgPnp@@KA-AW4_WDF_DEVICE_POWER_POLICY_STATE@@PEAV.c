__int64 __fastcall FxPkgPnp::PowerPolIdleCapableDirectedDownTriggerDPNR(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerNotRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1472LL;
}
