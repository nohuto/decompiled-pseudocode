__int64 __fastcall FxPkgPnp::PowerD0StartingPostHardwareEnabled(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v3; // edx
  __int64 v4; // r9
  const void *_a2; // rax
  __int64 v6; // rdx
  int v7; // r8d
  FxCxCallbackProgress progress; // [rsp+60h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_DWORD *)(v4 + 32) = v3;
  *(_QWORD *)(v4 + 24) = ObjectHandleUnchecked;
  if ( (int)FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v4, &progress, FxCxCleanupAfterPreFailure) >= 0 )
    return 786LL;
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qqLd(
    This->m_Globals,
    v6,
    0xCu,
    0x10u,
    WPP_PowerStateMachine_cpp_Traceguids,
    _a2,
    *(const void **)(v6 + 144),
    This->m_DevicePowerState,
    v7);
  return progress != FxCxCallbackProgressInitialized ? 872 : 834;
}
