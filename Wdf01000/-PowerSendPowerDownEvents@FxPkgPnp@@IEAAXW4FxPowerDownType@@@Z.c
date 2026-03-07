void __fastcall FxPkgPnp::PowerSendPowerDownEvents(FxPkgPnp *this, FxPowerDownType Type, unsigned __int8 a3)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyEvent v5; // edx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( Type == FxPowerDownTypeImplicit )
  {
    if ( m_Owner )
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
    v5 = this->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown;
  }
  else
  {
    if ( m_Owner )
    {
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      return;
    }
    v5 = PwrPolPowerDown;
  }
  FxPkgPnp::PowerPolicyProcessEvent(this, v5, a3);
}
