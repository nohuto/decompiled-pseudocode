/*
 * XREFs of ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAC18
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0009060 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxRequestBase::Vf_VerifyDispose(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxRequestBase *_a1; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( _bittest16(&this->m_VerifierFlags, 8u) )
  {
    FxObject::GetObjectHandleUnchecked(this->m_Target);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    _a1 = this;
    if ( ObjectHandleUnchecked )
      _a1 = (FxRequestBase *)ObjectHandleUnchecked;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
}
