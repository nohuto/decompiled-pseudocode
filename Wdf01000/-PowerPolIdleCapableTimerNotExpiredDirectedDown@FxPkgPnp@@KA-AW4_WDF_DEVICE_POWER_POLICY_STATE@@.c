__int64 __fastcall FxPkgPnp::PowerPolIdleCapableTimerNotExpiredDirectedDown(FxPkgPnp *This)
{
  FxPoxInterface::DeclareComponentIdle(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1437LL;
}
