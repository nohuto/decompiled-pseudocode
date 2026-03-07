__int64 __fastcall FxPkgPnp::PowerPolStartedWakeCapableCancelTimerForSleep(FxPkgPnp *This)
{
  return FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) != 0 ? 1440 : 1385;
}
