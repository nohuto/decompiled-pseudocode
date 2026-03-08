/*
 * XREFs of ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C000CA84
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C000C080 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0019C10 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C000C31C (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C000CC8A (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C001FAE0 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaTransactionBase::Initialize(
        FxDmaTransactionBase *this,
        unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned int Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  FxDmaTransactionState m_State; // edx
  const void *ObjectHandleUnchecked; // rax
  int _a2; // edx
  unsigned __int64 v15; // rax
  FxDmaEnabler *m_DmaEnabler; // r9
  __int64 v17; // rax
  _FxDmaDescription *v18; // rax
  FxDmaEnabler *v19; // rcx
  unsigned __int64 m_MaximumLength; // rcx
  int v21; // edi
  const void *v22; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1);
  }
  m_State = this->m_State;
  if ( (unsigned int)(m_State - 1) > 1 && m_State != FxDmaTransactionStateReleased )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionBase_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    v15 = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v15, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    v17 = (*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 280LL : 184LL;
  else
    v17 = 184LL;
  v18 = (_FxDmaDescription *)((char *)m_DmaEnabler + v17);
  this->m_AdapterInfo = v18;
  this->m_MaxFragmentLength = v18->MaximumFragmentLength;
  this->m_StartOffset = Offset;
  this->m_CurrentFragmentOffset = Offset;
  this->m_Remaining = Length;
  this->m_TransactionLength = Length;
  this->m_DmaDirection = DmaDirection;
  this->m_StartMdl = Mdl;
  this->m_CurrentFragmentMdl = Mdl;
  this->m_DmaAcquiredFunction.Method.ProgramDma = ProgramDmaFunction;
  if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v19, this->m_TransferContext, DmaDirection);
  if ( this->m_RequireSingleTransfer )
  {
    m_MaximumLength = this->m_DmaEnabler->m_MaximumLength;
    if ( this->m_MaxFragmentLength < m_MaximumLength )
      this->m_MaxFragmentLength = m_MaximumLength;
    v21 = FxDmaTransactionBase::PrepareForSingleTransfer(this);
    if ( v21 < 0 )
      goto LABEL_17;
  }
  v21 = this->InitializeResources(this);
  if ( v21 < 0 )
LABEL_17:
    FxDmaTransactionBase::ReleaseForReuse(this, 0);
  else
    this->m_State = FxDmaTransactionStateInitialized;
  if ( m_Globals->FxVerboseOn )
  {
    v22 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xDu, WPP_FxDmaTransactionBase_cpp_Traceguids, v22, v21);
  }
  return (unsigned int)v21;
}
