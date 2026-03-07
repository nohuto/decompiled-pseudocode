__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This)
{
  char v2; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  signed int _a1; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v6; // rdx
  const void *v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  WDFDEVICE__ *v10; // rax
  const void *v11; // rax
  __int64 v12; // rdx
  int v13; // r10d
  unsigned __int64 v14; // rax
  __int64 v15; // r8

  v2 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    m_SelfManagedIoMachine->m_DeviceSelfManagedIoSuspend.m_TargetState = WdfPowerDeviceD3Final;
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v2 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v6 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v6 + 32) = 5;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v6) < 0 )
  {
    v2 = 1;
    v7 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v8,
      0xCu,
      0x12u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v7,
      *(const void **)(v8 + 144),
      5u,
      v9);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(This) )
    v2 = 1;
  v10 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&This->m_DeviceD0ExitPreInterruptsDisabled, v10, 5u) < 0 )
  {
    v2 = 1;
    v11 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v12,
      0xCu,
      0x13u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v11,
      *(const void **)(v12 + 144),
      5u,
      v13);
  }
  if ( FxPkgPnp::NotifyResourceObjectsDx(This, 4u) < 0 )
    v2 = 1;
  v14 = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v15 + 32) = v14;
  *(_DWORD *)(v15 + 40) = 5;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v15) < 0 )
    v2 = 1;
  FxPkgPnp::PowerSetDevicePowerState(This, WdfPowerDeviceD3Final);
  This->PowerParentPowerDereference(This);
  if ( v2 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}
