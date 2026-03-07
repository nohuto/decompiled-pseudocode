__int64 __fastcall FxPkgPnp::PowerUpFailedPowerDown(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v2; // rdx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v2 + 32) = ObjectHandleUnchecked;
  *(_DWORD *)(v2 + 40) = 5;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v2);
  return 852LL;
}
