void __fastcall FxPkgPnp::PowerSetDevicePowerState(FxPkgPnp *this, POWER_STATE State)
{
  POWER_STATE v2; // r8d

  this->m_DevicePowerStateOld = this->m_DevicePowerState;
  this->m_DevicePowerState = State.SystemState;
  if ( State.SystemState == PowerSystemWorking )
  {
    this->m_SystemPowerAction = 0;
  }
  else
  {
    v2.SystemState = PowerSystemSleeping3;
    if ( (unsigned int)(State.SystemState - 5) <= 1 )
      goto LABEL_6;
  }
  v2.SystemState = State.SystemState;
LABEL_6:
  PoSetPowerState(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, v2);
}
