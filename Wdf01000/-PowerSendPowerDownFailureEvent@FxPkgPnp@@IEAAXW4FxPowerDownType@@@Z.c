void __fastcall FxPkgPnp::PowerSendPowerDownFailureEvent(FxPkgPnp *this, FxPowerDownType Type)
{
  unsigned __int8 v4; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyEvent v6; // edx
  unsigned __int8 v7; // r8

  this->m_InternalFailure = 1;
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( Type == FxPowerDownTypeImplicit )
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDownFailed, v4);
    else
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDownFailed);
  }
  else
  {
    v6 = PwrPolImplicitPowerDownFailed;
    if ( Type != FxPowerDownTypeImplicit )
      v6 = PwrPolPowerDownFailed;
    FxPkgPnp::PowerPolicyProcessEvent(this, v6, v4);
    if ( !this->m_ReleaseHardwareAfterDescendantsOnFailure )
      FxPkgPnp::PnpProcessEvent(this, PnpEventPowerDownFailed, v7);
  }
}
