/*
 * XREFs of ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00BB254
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0063E9C (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA8A0 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA2C (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *pDestQueue,
        FxRequest *pRequest)
{
  unsigned __int8 v8; // r8
  int IsDriverOwned; // ebx
  const void *_a1; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(pRequest, &irql, (unsigned __int8)pDestQueue);
  if ( !FxDriverGlobals->FxVerifierOn )
    goto LABEL_5;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned < 0 )
    goto LABEL_6;
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
  else
LABEL_5:
    IsDriverOwned = 0;
LABEL_6:
  FxNonPagedObject::Unlock(pRequest, irql, v8);
  if ( IsDriverOwned >= 0 )
  {
    if ( pDestQueue == this )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x25u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
LABEL_9:
      FxVerifierDbgBreakPoint(FxDriverGlobals);
      return 3221225488LL;
    }
    m_DeviceBase = pDestQueue->m_DeviceBase;
    if ( this->m_DeviceBase != m_DeviceBase )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x26u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      goto LABEL_9;
    }
  }
  return (unsigned int)IsDriverOwned;
}
