__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableRevertArmWake(FxPkgPnp *This)
{
  const void *_a1; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_q(This->m_Globals, 3u, 0xCu, 0x25u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v4 + 488) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)(v4 + 456));
  return 1335LL;
}
