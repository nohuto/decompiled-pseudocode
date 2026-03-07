__int64 __fastcall FxDmaTransactionBase::Execute(FxDmaTransactionBase *this, void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  int _a2; // r8d
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxDmaTransactionBase_vtbl *v9; // rax
  int v10; // edi
  FxRequest *v11; // rcx
  FxRequest *v12; // rcx

  m_Globals = this->m_Globals;
  if ( this->m_State != FxDmaTransactionStateInitialized )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
  }
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    FxRequest::AddIrpReference(m_EncodedRequest);
    FxObject::AddRef(
      this->m_EncodedRequest,
      this,
      274,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    this->m_EncodedRequest = (FxRequest *)((unsigned __int64)this->m_EncodedRequest | 1);
  }
  v9 = this->__vftable;
  this->m_State = FxDmaTransactionStateTransfer;
  this->m_DmaAcquiredContext = Context;
  v10 = v9->StartTransfer(this);
  if ( v10 < 0 )
  {
    this->m_DmaAcquiredContext = 0LL;
    v11 = this->m_EncodedRequest;
    this->m_State = FxDmaTransactionStateTransferFailed;
    if ( v11 )
    {
      v12 = (FxRequest *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v12;
      FxRequest::ReleaseIrpReference(v12);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  return (unsigned int)v10;
}
