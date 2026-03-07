void __fastcall FxPkgPnp::PowerConnectInterruptFailed(FxPkgPnp *this)
{
  const void *_a1; // rax
  int _a2; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v5; // r8

  if ( FxPkgPnp::NotifyResourceObjectsDx(this, 4u) < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x24u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2);
  }
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v5 + 32) = ObjectHandleUnchecked;
  *(_DWORD *)(v5 + 40) = 5;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v5);
  FxPkgPnp::PowerSetDevicePowerState(this, WdfPowerDeviceD3Final);
}
