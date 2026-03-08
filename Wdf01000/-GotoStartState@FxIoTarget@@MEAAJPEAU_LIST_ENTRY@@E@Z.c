/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C00531E0
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C005A730 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0052A48 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned __int8 v5; // di
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned int v13; // esi
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  irql = 0;
  FxObject::AddRef(this, (void *)0x74727453, 318, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( !Lock )
    goto LABEL_11;
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, v7);
    v5 = irql;
LABEL_11:
    if ( this->m_State == WdfIoTargetDeleted )
    {
      v13 = -1073741436;
      goto LABEL_13;
    }
    if ( !this->m_WaitingForSentIo )
      break;
    m_Globals = this->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v10, 0xBu) || m_Globals->FxVerifyDownlevel)
      && v5 )
    {
      FxVerifierDbgBreakPoint(v12);
    }
    FxNonPagedObject::Unlock(this, v5, v11);
    this->WaitForSentIoToComplete(this);
  }
  v13 = 0;
  this->m_State = WdfIoTargetStarted;
  this->m_WaitingForSentIo = 0;
  KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
LABEL_13:
  if ( Lock )
    FxNonPagedObject::Unlock(this, v5, v7);
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v13;
}
