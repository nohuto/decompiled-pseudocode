__int64 __fastcall FxPkgPnp::PowerPolRestartingFailed(FxPkgPnp *This)
{
  KIRQL v2; // bl
  unsigned __int8 v3; // r8

  FxPowerIdleMachine::Stop(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  v2 = KfRaiseIrql(2u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolStartFailed, v3);
  KeLowerIrql(v2);
  return 1379LL;
}
