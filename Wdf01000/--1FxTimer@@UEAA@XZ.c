/*
 * XREFs of ??1FxTimer@@UEAA@XZ @ 0x1C0040DE4
 * Callers:
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C0040E60 (--_EFxTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C003F8CC (--1MxTimer@@QEAA@XZ.c)
 */

void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2)
{
  bool v2; // zf
  const void *_a1; // rax
  unsigned int v5; // edx

  v2 = this->m_Object == 0LL;
  this->__vftable = (FxTimer_vtbl *)FxTimer::`vftable';
  if ( !v2 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  MxTimer::~MxTimer(&this->m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, v5);
}
