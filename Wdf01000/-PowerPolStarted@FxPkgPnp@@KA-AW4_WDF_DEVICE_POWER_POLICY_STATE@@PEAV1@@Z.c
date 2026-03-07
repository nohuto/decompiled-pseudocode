__int64 __fastcall FxPkgPnp::PowerPolStarted(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return 1472LL;
}
