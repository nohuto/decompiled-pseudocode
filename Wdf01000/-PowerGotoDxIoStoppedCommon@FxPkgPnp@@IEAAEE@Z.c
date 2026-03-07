unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  char v4; // bp
  _WDF_POWER_DEVICE_STATE _a4; // esi
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v7; // r8
  const void *_a2; // rax
  __int64 v9; // rdx
  int v10; // r8d
  const _GUID *_a1; // r10
  WDFDEVICE__ *v12; // rax
  const void *v13; // rax
  __int64 v14; // rdx
  int v15; // r10d
  unsigned int v16; // edx
  char v17; // bl
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // rdx

  v4 = 0;
  _a4 = (unsigned int)FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v7 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v7 + 32) = _a4;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v7) < 0 )
  {
    v4 = 1;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(this->m_Globals, v9, 0xCu, 0x16u, _a1, _a2, *(const void **)(v9 + 144), _a4, v10);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(this) )
    v4 = 1;
  v12 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&this->m_DeviceD0ExitPreInterruptsDisabled, v12, _a4) < 0 )
  {
    v4 = 1;
    v13 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      *(_QWORD *)(v14 + 144),
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v13,
      *(const void **)(v14 + 144),
      _a4,
      v15);
  }
  if ( NonPageable )
  {
    v16 = 1;
  }
  else
  {
    v16 = 16;
    if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
    {
      v16 = 80;
      this->m_WakeInterruptsKeepConnected = 0;
    }
  }
  v17 = v4;
  if ( FxPkgPnp::NotifyResourceObjectsDx(this, v16) < 0 )
    v17 = 1;
  v18 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v19 + 32) = v18;
  *(_DWORD *)(v19 + 40) = _a4;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v19) < 0 )
    v17 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
LABEL_19:
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  if ( v17 )
    goto LABEL_19;
  FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit);
  LOBYTE(v21) = 1;
  this->PowerReleasePendingDeviceIrp(this, v21);
  return 1;
}
