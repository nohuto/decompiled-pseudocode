__int64 __fastcall FxPkgPnp::PowerPolDeviceIdleStopping(FxPkgPnp *This)
{
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1374LL;
}
