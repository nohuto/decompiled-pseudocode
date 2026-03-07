__int64 __fastcall FxDmaScatterGatherTransaction::InitializeResources(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 m_TransactionLength; // rsi
  int v5; // edi
  _MDL *globals; // r14
  unsigned __int64 m_MaxFragmentLength; // r15
  unsigned __int64 m_StartOffset; // r12
  const void *ObjectHandleUnchecked; // rax
  __int64 flags; // rdx
  unsigned int level; // r8d
  const void *v12; // rax
  unsigned __int64 *NextOffset; // [rsp+20h] [rbp-68h]
  int v14; // [rsp+48h] [rbp-40h]
  unsigned int mapRegistersRequired; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 nextOffset; // [rsp+98h] [rbp+10h] BYREF
  _MDL *nextMdl; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 possibleLength; // [rsp+A8h] [rbp+20h] BYREF

  mapRegistersRequired = 0;
  m_Globals = this->m_Globals;
  if ( this->m_RequireSingleTransfer )
    return 0LL;
  m_TransactionLength = this->m_TransactionLength;
  v5 = 0;
  globals = this->m_StartMdl;
  LODWORD(m_MaxFragmentLength) = 0;
  m_StartOffset = this->m_StartOffset;
  nextMdl = globals;
  nextOffset = m_StartOffset;
  if ( m_TransactionLength )
  {
    while ( 1 )
    {
      FxDmaTransactionBase::_ComputeNextTransferAddress(
        globals,
        m_StartOffset,
        m_MaxFragmentLength,
        &nextMdl,
        &nextOffset);
      m_StartOffset = nextOffset;
      m_MaxFragmentLength = m_TransactionLength;
      globals = nextMdl;
      if ( m_TransactionLength >= this->m_MaxFragmentLength )
        m_MaxFragmentLength = this->m_MaxFragmentLength;
      v5 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
             nextMdl,
             nextOffset,
             m_MaxFragmentLength,
             this->m_AdapterInfo->NumberOfMapRegisters,
             (unsigned int *)&possibleLength,
             &mapRegistersRequired);
      if ( v5 < 0 )
        break;
      if ( mapRegistersRequired > this->m_DmaEnabler->m_MaxSGElements )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qqdid(
          m_Globals,
          flags,
          level,
          0xDu,
          (const _GUID *)NextOffset,
          ObjectHandleUnchecked,
          globals,
          level,
          flags,
          v14);
        return 3223323146LL;
      }
      m_TransactionLength -= m_MaxFragmentLength;
      if ( !m_TransactionLength )
        return (unsigned int)v5;
    }
    v12 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v12, v5);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)v5;
}
