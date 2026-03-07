__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *ObjectHandleUnchecked; // rbp
  const void *_a1; // rax
  const _GUID *v5; // rdx
  unsigned __int64 *p_m_CurrentFragmentOffset; // r15
  _MDL **p_m_CurrentFragmentMdl; // rsi
  unsigned int *p_m_CurrentFragmentLength; // r14
  unsigned __int64 m_Remaining; // rax
  bool v10; // zf
  unsigned int v11; // r8d
  __int64 flags; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  _MDL *v16; // rdx
  int ScatterGatherList; // eax
  unsigned int v18; // esi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+48h] [rbp-20h]
  unsigned int mapRegistersRequired; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  mapRegistersRequired = -1;
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xEu, v5, _a1);
  }
  p_m_CurrentFragmentOffset = &this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentMdl = &this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = (unsigned int *)&this->m_CurrentFragmentLength;
  FxDmaTransactionBase::_ComputeNextTransferAddress(
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    &this->m_CurrentFragmentMdl,
    &this->m_CurrentFragmentOffset);
  m_Remaining = this->m_Remaining;
  if ( m_Remaining >= this->m_MaxFragmentLength )
    m_Remaining = this->m_MaxFragmentLength;
  v10 = this->m_RequireSingleTransfer == 0;
  *(_QWORD *)p_m_CurrentFragmentLength = m_Remaining;
  if ( v10
    && (FxDmaTransactionBase::_CalculateRequiredMapRegisters(
          *p_m_CurrentFragmentMdl,
          *p_m_CurrentFragmentOffset,
          *p_m_CurrentFragmentLength,
          this->m_AdapterInfo->NumberOfMapRegisters,
          (unsigned int *)&this->m_CurrentFragmentLength,
          &mapRegistersRequired),
        flags = this->m_DmaEnabler->m_MaxSGElements,
        mapRegistersRequired > (unsigned int)flags) )
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      mapRegistersRequired,
      v11,
      0xFu,
      traceGuid,
      ObjectHandleUnchecked,
      *p_m_CurrentFragmentMdl,
      mapRegistersRequired,
      flags,
      v20);
    return 3223323146LL;
  }
  else
  {
    v14 = *(_QWORD *)p_m_CurrentFragmentLength;
    this->m_Remaining -= *(_QWORD *)p_m_CurrentFragmentLength;
    v15 = *p_m_CurrentFragmentOffset;
    v16 = *p_m_CurrentFragmentMdl;
    if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
      ScatterGatherList = FxDmaScatterGatherTransaction::BuildScatterGatherList(
                            this,
                            v16,
                            v15,
                            v14,
                            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))traceGuid,
                            this,
                            this->m_SGListBuffer,
                            this->m_SgListBufferSize);
    else
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(
                            this,
                            v16,
                            v15,
                            v14,
                            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))traceGuid,
                            this);
    v18 = ScatterGatherList;
    if ( ScatterGatherList >= 0 )
    {
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(
            m_Globals,
            5u,
            0xFu,
            0x11u,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            ObjectHandleUnchecked,
            ScatterGatherList);
      }
    }
    else
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xFu,
        0x10u,
        WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
        ObjectHandleUnchecked,
        ScatterGatherList);
      this->m_Remaining += *(_QWORD *)p_m_CurrentFragmentLength;
    }
    return v18;
  }
}
