/*
 * XREFs of ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0085284
 * Callers:
 *     ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0050DF0 (-RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0061FC4 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::RemoveDmaEnabler(FxPkgPnp *this, FxDmaEnabler *Enabler)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Enabler);
    WPP_IFR_SF_qq(v7, 5u, 0xCu, 0xDu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    m_Globals = this->m_Globals;
  }
  FxTransactionedList::Remove(this->m_DmaEnablerList, m_Globals, &Enabler->m_TransactionLink);
}
