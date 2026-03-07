__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakeReturnToActive(FxPkgPnp *This)
{
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1285LL;
}
