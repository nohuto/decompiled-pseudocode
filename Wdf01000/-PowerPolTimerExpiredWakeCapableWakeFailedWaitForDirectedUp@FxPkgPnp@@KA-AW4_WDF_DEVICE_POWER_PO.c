__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeFailedWaitForDirectedUp(FxPkgPnp *This)
{
  FxPoxInterface::NotifyDeviceDirectedPoweredDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1472LL;
}
