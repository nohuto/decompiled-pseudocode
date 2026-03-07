__int64 __fastcall FxPkgPnp::PowerPolWakeCapableDeviceIdle(FxPkgPnp *This)
{
  return FxPoxInterface::DeclareComponentIdle(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) != 0 ? 1330 : 1472;
}
