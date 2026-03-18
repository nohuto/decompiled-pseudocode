/*
 * XREFs of ?Start@FxIoTarget@@UEAAJXZ @ 0x1C0065BC0
 * Callers:
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C0071760 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0065EEC (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall FxIoTarget::Start(FxIoTarget *this, __int64 a2, __int64 a3)
{
  unsigned int _a2; // ebx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v6; // r10
  _LIST_ENTRY head; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a3) = 1;
  head.Blink = &head;
  head.Flink = &head;
  _a2 = this->GotoStartState(this, &head, a3);
  FxIoTarget::SubmitPendedRequests(this, &head);
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(v6, 5u, 0xEu, 0xEu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  return _a2;
}
