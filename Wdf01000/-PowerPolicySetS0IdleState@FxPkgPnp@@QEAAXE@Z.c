void __fastcall FxPkgPnp::PowerPolicySetS0IdleState(FxPkgPnp *this, unsigned __int8 State)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r8

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 18, 5);
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
  }
  m_Owner->m_IdleSettings.Enabled = State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 1;
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0IdlePolicyChanged, (unsigned __int8)m_Owner);
}
