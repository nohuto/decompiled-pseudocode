__int64 __fastcall FxPkgPnp::PowerPolicySendDevicePowerRequest(
        FxPkgPnp *this,
        POWER_STATE DeviceState,
        SendDeviceRequestAction Action,
        RequestDIrpReason Reason)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  void (__fastcall *v5)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, void *, _IO_STATUS_BLOCK *); // r13
  FxDevicePowerIrpTracker *p_m_DevicePowerIrpTracker; // rsi
  FxPowerPolicyOwnerSettings *v11; // rax
  int v12; // r14d
  NTSTATUS v13; // ebp
  FxPowerPolicyOwnerSettings *v14; // rax
  const void *_a4; // rax
  __int64 v16; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LARGE_INTEGER interval; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 PowerUp; // [rsp+98h] [rbp+10h]

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v5 = FxPkgPnp::_PowerPolDevicePowerUpComplete;
  interval.QuadPart = -5000000LL;
  if ( DeviceState.SystemState != PowerSystemWorking )
    v5 = FxPkgPnp::_PowerPolDevicePowerDownComplete;
  p_m_DevicePowerIrpTracker = &m_Owner->m_DevicePowerIrpTracker;
  PowerUp = DeviceState.SystemState == PowerSystemWorking;
  FxDevicePowerIrpTracker::LogRequestDIrpReason(
    p_m_DevicePowerIrpTracker,
    Reason,
    DeviceState.SystemState == PowerSystemWorking);
  if ( (unsigned int)(Reason - 2) <= 1 )
    FxDevicePowerIrpTracker::StartTrackingDevicePowerIrp(p_m_DevicePowerIrpTracker, Reason);
  v11 = this->m_PowerPolicyMachine.m_Owner;
  if ( DeviceState.SystemState == PowerSystemWorking )
    v11->m_RequestedPowerUpIrp = 1;
  else
    v11->m_RequestedPowerDownIrp = 1;
  v12 = 0;
  while ( 1 )
  {
    v13 = PoRequestPowerIrp(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 2u, DeviceState, v5, this, 0LL);
    if ( v13 >= 0 )
      break;
    if ( Action )
    {
      KeDelayExecutionThread(0, 0, &interval);
      if ( (unsigned int)++v12 < 0x64 )
        continue;
    }
    FxDevicePowerIrpTracker::LogRequestDIrpReason(p_m_DevicePowerIrpTracker, RequestDIrpFailed, PowerUp);
    if ( (unsigned int)(Reason - 2) <= 1 )
      p_m_DevicePowerIrpTracker->m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
    v14 = this->m_PowerPolicyMachine.m_Owner;
    if ( DeviceState.SystemState == PowerSystemWorking )
      v14->m_RequestedPowerUpIrp = 0;
    else
      v14->m_RequestedPowerDownIrp = 0;
    if ( Action == Retry )
    {
      _a4 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_dqqd(
        this->m_Globals,
        v16,
        0xCu,
        0x27u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        DeviceState.SystemState - 1,
        *(const void **)(v16 + 144),
        _a4,
        v13);
    }
    break;
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(
      m_Globals,
      5u,
      0xCu,
      0x28u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      DeviceState.SystemState - 1,
      v13);
  return (unsigned int)v13;
}
