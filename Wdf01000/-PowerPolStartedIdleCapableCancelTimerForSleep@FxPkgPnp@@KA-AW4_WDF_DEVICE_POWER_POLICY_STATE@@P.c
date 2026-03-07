__int64 __fastcall FxPkgPnp::PowerPolStartedIdleCapableCancelTimerForSleep(FxPkgPnp *This)
{
  return FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) != 0 ? 1434 : 1388;
}
