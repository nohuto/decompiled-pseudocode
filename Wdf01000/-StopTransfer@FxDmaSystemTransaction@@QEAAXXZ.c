void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  _FxDmaDescription *m_AdapterInfo; // rax
  int _a2; // ebx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v5; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *ObjectHandleUnchecked; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rax

  m_AdapterInfo = this->m_AdapterInfo;
  this->m_IsCancelled = 1;
  _a2 = m_AdapterInfo->AdapterObject->DmaOperations->CancelMappedTransfer(
          m_AdapterInfo->AdapterObject,
          this->m_TransferContext);
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(v5, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1, _a2);
  }
  if ( _a2 < 0 )
  {
    m_Globals = this->m_Globals;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionSystem_cpp_Traceguids, ObjectHandleUnchecked);
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xBu) || m_Globals->FxVerifyDownlevel )
      {
        v9 = FxObject::GetObjectHandleUnchecked(this);
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v9, this->m_State);
      }
    }
  }
}
