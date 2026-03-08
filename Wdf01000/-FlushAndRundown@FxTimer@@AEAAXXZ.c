/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0040EE4
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x1C0040EA0 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000578C (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this)
{
  const void *_a1; // rax
  const void *_a2; // rdx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxTimer::Stop(this, 1u);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 547, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  this->Release(this, this, 553, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}
