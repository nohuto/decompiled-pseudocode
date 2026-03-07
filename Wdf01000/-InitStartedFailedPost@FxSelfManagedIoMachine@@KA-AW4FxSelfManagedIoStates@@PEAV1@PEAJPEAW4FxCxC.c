__int64 __fastcall FxSelfManagedIoMachine::InitStartedFailedPost(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx

  This->m_DeviceSelfManagedIoSuspend.m_TargetState = WdfPowerDeviceD3Final;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_PkgPnp->m_DeviceBase);
  *(_QWORD *)(v4 + 32) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v4);
  return 3LL;
}
