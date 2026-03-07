__int64 __fastcall FxPkgPnp::PowerPolSystemWakeQueryIdle(FxPkgPnp *This)
{
  return FxPowerIdleMachine::QueryReturnToIdle(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) ? 1288 : 1326;
}
