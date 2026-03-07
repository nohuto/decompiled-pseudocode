void __fastcall FxDmaTransactionBase::GetTransferInfo(
        FxDmaTransactionBase *this,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  int _a2; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 m_StartOffset; // r10
  unsigned __int64 m_TransactionLength; // r11
  _MDL *m_StartMdl; // rdx
  unsigned __int64 ByteCount; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  _DMA_TRANSFER_INFO info; // [rsp+40h] [rbp-28h] BYREF

  if ( this->m_State != FxDmaTransactionStateInitialized )
  {
    m_Globals = this->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  memset(&info, 0, sizeof(info));
  if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo(
      this->m_AdapterInfo->AdapterObject,
      this->m_StartMdl,
      this->m_StartOffset,
      this->m_TransactionLength,
      this->m_DmaDirection == WdfDmaDirectionWriteToDevice,
      &info);
    v11 = info.V1.ScatterGatherElementCount;
    v12 = info.V1.MapRegisterCount;
  }
  else
  {
    m_StartOffset = this->m_StartOffset;
    m_TransactionLength = this->m_TransactionLength;
    m_StartMdl = this->m_StartMdl;
    v12 = info.V1.MapRegisterCount;
    while ( m_StartMdl && m_TransactionLength )
    {
      ByteCount = m_StartMdl->ByteCount;
      if ( ByteCount > m_StartOffset )
      {
        v17 = ByteCount - m_StartOffset;
        v18 = v17;
        if ( v17 >= m_TransactionLength )
          v18 = m_TransactionLength;
        v12 += ((((_DWORD)m_StartOffset + LODWORD(m_StartMdl->StartVa) + m_StartMdl->ByteOffset) & 0xFFF) + v18 + 4095) >> 12;
        info.V1.MapRegisterCount = v12;
        if ( v17 >= m_TransactionLength )
          v17 = m_TransactionLength;
        m_TransactionLength -= v17;
      }
      else
      {
        m_StartOffset -= ByteCount;
      }
      m_StartMdl = m_StartMdl->Next;
    }
    v11 = v12;
  }
  if ( MapRegisterCount )
    *MapRegisterCount = v12;
  if ( ScatterGatherElementCount )
    *ScatterGatherElementCount = v11;
}
