/*
 * XREFs of ??1FxWorkItem@@UEAA@XZ @ 0x1C0040834
 * Callers:
 *     ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C00408F0 (--_EFxWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0040A18 (-Free@MxWorkItem@@QEAAXXZ.c)
 */

void __fastcall FxWorkItem::~FxWorkItem(FxWorkItem *this, unsigned int a2)
{
  bool v2; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  FxObject *m_Object; // rcx

  v2 = this->m_RunningDown == 0;
  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  if ( v2 && this->m_Callback )
  {
    m_Globals = this->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    m_Object->Release(m_Object, this, 91, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    this->m_Object = 0LL;
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
