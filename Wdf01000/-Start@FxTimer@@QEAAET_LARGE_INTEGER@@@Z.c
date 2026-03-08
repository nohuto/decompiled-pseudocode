/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0005E68
 * Callers:
 *     imp_WdfTimerStart @ 0x1C0005490 (imp_WdfTimerStart.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x1C00064A8 (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

unsigned __int8 __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime)
{
  unsigned __int8 v4; // r14
  char v5; // bp
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  v4 = 0;
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql);
  if ( this->m_RunningDown )
  {
    _a1 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else if ( this->m_StopThread )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxTimer_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    this->m_StartAborted = 1;
  }
  else
  {
    v5 = 1;
  }
  FxNonPagedObject::Unlock(this, irql);
  if ( v5 )
  {
    FxObject::AddRef(this, this, 629, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
    v4 = MxTimer::StartWithReturn(&this->m_Timer, DueTime, this->m_TolerableDelay);
    FxNonPagedObject::Lock(this, &irql);
    if ( this->m_StopThread )
      this->m_StopAgain = 1;
    FxNonPagedObject::Unlock(this, irql);
    this->Release(this, this, 646, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  return v4;
}
