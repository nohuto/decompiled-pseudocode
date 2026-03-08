/*
 * XREFs of ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00819E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Init(
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
  if ( *Status >= 0 )
    return 5LL;
  if ( v7 )
    return 4 - (unsigned int)((unsigned __int8)v7 < FxCxCallbackProgressClientSucceeded);
  return 1LL;
}
