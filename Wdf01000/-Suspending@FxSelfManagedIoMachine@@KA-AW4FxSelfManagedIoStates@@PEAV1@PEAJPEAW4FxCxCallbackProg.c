__int64 __fastcall FxSelfManagedIoMachine::Suspending(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ecx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_PkgPnp->m_DeviceBase);
  *(_QWORD *)(v5 + 32) = ObjectHandleUnchecked;
  v6 = FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v5);
  v7 = 10;
  *Status = v6;
  if ( v6 >= 0 )
    return 7;
  return v7;
}
