__int64 __fastcall FxPkgPnp::PowerPolIdleCapableDeviceIdle(FxPkgPnp *This)
{
  return FxPoxInterface::DeclareComponentIdle(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) != 0 ? 1286 : 1472;
}
