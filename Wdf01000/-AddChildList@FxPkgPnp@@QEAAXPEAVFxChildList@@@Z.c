/*
 * XREFs of ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C00711E4
 * Callers:
 *     ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C003C010 (-AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C004F80C (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::AddChildList(FxPkgPnp *this, FxChildList *List)
{
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v6; // r10

  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(List);
    WPP_IFR_SF_qq(v6, 5u, 0xCu, 0x4Du, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  }
  FxTransactionedList::Add(&this->m_EnumInfo->m_ChildListList, this->m_Globals, &List->m_TransactionLink);
}
