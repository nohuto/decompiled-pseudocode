/*
 * XREFs of ?DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00065C4
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C000F746 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000354C (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0034C84 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchToInCallerContextCallback(
        FxPkgIo *this,
        FxIoInCallerContext *InCallerContextInfo,
        FxRequest *Request,
        _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  void *ObjectHandleUnchecked; // rcx

  m_Globals = this->m_Globals;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(Request, 33);
  FxRequest::SetCompletionState(Request, FxRequestCompletionStateIoPkg);
  Request->Release(Request, (void *)1952543827, 1741, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  Request->m_Presented = 1;
  FxObject::GetObjectHandleUnchecked(Request);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  if ( InCallerContextInfo->m_Method )
    ((void (__fastcall *)(void *))InCallerContextInfo->m_Method)(ObjectHandleUnchecked);
  return 259LL;
}
