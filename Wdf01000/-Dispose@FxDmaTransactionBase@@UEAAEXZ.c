/*
 * XREFs of ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C001F580
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C001E4D0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C003ACFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::Dispose(FxDmaTransactionBase *this, __int64 a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxDmaTransactionBase_vtbl *v6; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v8; // rcx

  m_Globals = this->m_Globals;
  if ( this->m_State == FxDmaTransactionStateTransfer )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 4);
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, a2, 9u) || m_Globals->FxVerifyDownlevel )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
      }
    }
  }
  v6 = this->__vftable;
  LOBYTE(a2) = 1;
  this->m_State = FxDmaTransactionStateDeleted;
  v6->ReleaseResources(this, a2);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v8 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v8;
      FxRequest::ReleaseIrpReference(v8);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
  return 1;
}
