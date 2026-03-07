__int64 __fastcall FxPoxInterface::NotifyDevicePowerDown(FxPoxInterface *this)
{
  char v1; // bl
  KIRQL v4; // bp

  v1 = 0;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  if ( !this->m_DevicePowerRequired )
  {
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventDeviceGoingToDx);
    v1 = 1;
  }
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  return v1 == 0 ? 0xC0000001 : 0;
}
