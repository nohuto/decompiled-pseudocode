/*
 * XREFs of ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C001C854
 * Callers:
 *     imp_WdfDmaTransactionFreeResources @ 0x1C0019A40 (imp_WdfDmaTransactionFreeResources.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C000CC8A (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseAdapter(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  __int64 v4; // rdx
  const void *v5; // rsi
  FxDmaTransactionState m_State; // eax
  int v7; // ecx
  unsigned __int64 ObjectHandleUnchecked; // rax

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v5 = _a1;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x10u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  m_State = this->m_State;
  if ( (unsigned int)m_State <= FxDmaTransactionStateDeleted )
  {
    v7 = 275;
    if ( _bittest(&v7, m_State) )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5, this->m_State);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
    }
  }
  LOBYTE(v4) = 1;
  FxDmaTransactionBase::ReleaseForReuse(this, v4);
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5);
  }
}
