__int64 __fastcall FxPkgPnp::PowerInitialPostHardwareEnabledFailed(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // rdx
  const void *_a2; // rax
  __int64 v5; // rdx
  int v6; // r8d

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v3 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v3 + 32) = 5;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v3) < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v5,
      0xCu,
      0x21u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v5 + 144),
      5u,
      v6);
  }
  return 834LL;
}
