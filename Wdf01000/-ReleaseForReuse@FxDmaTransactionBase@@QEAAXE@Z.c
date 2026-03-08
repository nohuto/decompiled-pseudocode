/*
 * XREFs of ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C000CC8A
 * Callers:
 *     imp_WdfDmaTransactionRelease @ 0x1C000C2E0 (imp_WdfDmaTransactionRelease.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C000CA84 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C001C854 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C001C9D4 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x1C000CDE4 (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C003ACFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaTransactionBase::ReleaseForReuse(FxDmaTransactionBase *this, __int64 ForceRelease)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v3; // si
  FxDmaTransactionState m_State; // eax
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int64 v8; // rax
  FxDmaTransactionBase_vtbl *v9; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v11; // rcx

  m_Globals = this->m_Globals;
  v3 = ForceRelease;
  if ( !(_BYTE)ForceRelease )
  {
    m_State = this->m_State;
    if ( m_State == FxDmaTransactionStateReleased )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(m_Globals, 3u, 0xFu, 0x1Cu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 0);
      return;
    }
    if ( m_State == FxDmaTransactionStateTransfer )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Du, WPP_FxDmaTransactionBase_cpp_Traceguids, ObjectHandleUnchecked, 4);
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, ForceRelease, 0xBu)
          || m_Globals->FxVerifyDownlevel )
        {
          v8 = FxObject::GetObjectHandleUnchecked(this);
          FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v8, this->m_State);
        }
      }
    }
  }
  v9 = this->__vftable;
  LOBYTE(ForceRelease) = v3;
  this->m_State = FxDmaTransactionStateReleased;
  v9->ReleaseResources(this, ForceRelease);
  FxDmaTransactionBase::Reset(this);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v11 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v11;
      FxRequest::ReleaseIrpReference(v11);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
}
