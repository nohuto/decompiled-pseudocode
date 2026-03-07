__int64 __fastcall FxPkgPnp::PowerPolStoppingD0Failed(FxPkgPnp *This)
{
  This->m_PowerPolicyMachine.m_Owner->m_PowerFailed = 1;
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1369LL;
}
