__int64 __fastcall FxSelfManagedIoMachine::Restarting(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v6; // r9
  FxCxCallbackProgress v7; // al
  FxCxCallbackProgress v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_PkgPnp->m_DeviceBase);
  *(_QWORD *)(v6 + 32) = ObjectHandleUnchecked;
  *Status = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v6, &v9, FxCxCleanupAfterPreOrClientFailure);
  v7 = v9;
  if ( Progress )
    *Progress = v9;
  if ( *Status < 0 )
    return (unsigned int)((unsigned __int8)v7 < FxCxCallbackProgressClientSucceeded) + 9;
  else
    return 5LL;
}
