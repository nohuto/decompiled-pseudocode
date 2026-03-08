/*
 * XREFs of ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C00537F0
 * Callers:
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C005DA70 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00528E8 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C00543B0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::Purge(FxIoTarget *this, __int64 Action)
{
  unsigned __int8 v3; // r8
  FxIoTarget_vtbl *v4; // rax
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v9; // r10
  unsigned __int8 _a1; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+78h] [rbp+28h] BYREF

  sentHead.Next = 0LL;
  pendedHead.Blink = &pendedHead;
  _a1 = 1;
  wait = 0;
  pendedHead.Flink = &pendedHead;
  this->GotoPurgeState(this, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action, &pendedHead, &sentHead, &wait, _a1);
  FxIoTarget::CompletePendedRequestList(this, &pendedHead, v3);
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( wait )
  {
    v4 = this->__vftable;
    irql = 0;
    v4->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v5);
    v6 = irql;
    this->m_WaitingForSentIo = 0;
    FxNonPagedObject::Unlock(this, v6, v7);
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v9, 5u, 0xEu, 0x16u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, ObjectHandleUnchecked);
  }
}
