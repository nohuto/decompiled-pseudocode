/*
 * XREFs of ?InitStartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C0081A60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000FEF8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

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
