__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDevicePowerRequestFailed(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1390LL;
}
