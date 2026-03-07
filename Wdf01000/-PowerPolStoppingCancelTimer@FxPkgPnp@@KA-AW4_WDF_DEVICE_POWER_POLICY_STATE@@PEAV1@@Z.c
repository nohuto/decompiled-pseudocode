__int64 __fastcall FxPkgPnp::PowerPolStoppingCancelTimer(FxPkgPnp *This)
{
  return FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) != 0 ? 1371 : 1375;
}
