/*
 * XREFs of ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C00791B0
 * Callers:
 *     ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C003CEB0 (-RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C004FB88 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::RemoveDmaEnabler(FxPkgPnp *this, FxDmaEnabler *Enabler)
{
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v6; // r10

  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Enabler);
    WPP_IFR_SF_qq(v6, 5u, 0xCu, 0xDu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
  }
  FxTransactionedList::Remove(this->m_DmaEnablerList, this->m_Globals, &Enabler->m_TransactionLink);
}
