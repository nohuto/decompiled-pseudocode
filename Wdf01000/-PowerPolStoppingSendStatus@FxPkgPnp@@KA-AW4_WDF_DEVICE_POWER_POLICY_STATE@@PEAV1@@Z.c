__int64 __fastcall FxPkgPnp::PowerPolStoppingSendStatus(FxPkgPnp *This)
{
  KIRQL v2; // bl

  FxPowerIdleMachine::Stop(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  v2 = KfRaiseIrql(2u);
  FxPkgPnp::PnpProcessEvent(
    This,
    (FxPnpEvent)(This->m_PowerPolicyMachine.m_Owner->m_PowerFailed != 0
               ? PnpEventPwrPolStopFailed
               : PnpEventPwrPolStopped),
    -This->m_PowerPolicyMachine.m_Owner->m_PowerFailed);
  KeLowerIrql(v2);
  This->m_PowerPolicyMachine.m_Owner->m_PowerFailed = 0;
  return 1379LL;
}
