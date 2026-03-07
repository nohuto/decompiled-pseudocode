__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceD0PowerRequestFailed(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1389LL;
}
