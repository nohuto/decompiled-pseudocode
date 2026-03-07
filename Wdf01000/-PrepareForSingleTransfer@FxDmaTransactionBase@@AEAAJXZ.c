__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(FxDmaTransactionBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *globals; // rax
  unsigned __int64 level; // rdx
  unsigned __int64 flags; // r8
  int v7; // r14d
  const void *ObjectHandleUnchecked; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int id; // [rsp+40h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( this->m_TransactionLength <= this->m_MaxFragmentLength )
  {
    v7 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
           this->m_AdapterInfo->AdapterObject,
           this->m_StartMdl,
           this->m_StartOffset,
           LODWORD(this->m_TransactionLength));
    if ( v7 >= 0 )
    {
      ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetNumberOfAvailableMapRegisters)(this);
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
        ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetSgListBufferSize)(this);
    }
    else
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, ObjectHandleUnchecked, v7);
    }
    return (unsigned int)v7;
  }
  else
  {
    globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qPPd(m_Globals, level, flags, 0xEu, traceGuid, globals, level, flags, id);
    return 3223323155LL;
  }
}
