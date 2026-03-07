__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeFailedTriggerDPR(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1472LL;
}
