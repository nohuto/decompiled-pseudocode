/*
 * XREFs of ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000FD14
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F7E0 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FC54 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010A58 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxChildList::InvokeReportedMissingCallback(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rbp
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v5; // al
  KIRQL v6; // bl
  FxChildList *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 ObjectHandleUnchecked; // r8
  void (__fastcall *v10)(unsigned __int64); // rax
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListLockedForEnum;
  KeReleaseSpinLock(p_m_ListLock, v3);
  Flink = this->m_DescriptionListHead.Flink;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      v7 = (FxChildList *)Flink->Flink;
      if ( BYTE3(Flink[5].Flink) == 1 )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)Flink[4].Flink);
        v10 = *(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v8 + 648) + 1768LL);
        if ( v10 )
          v10(ObjectHandleUnchecked);
        BYTE3(Flink[5].Flink) = 2;
      }
      Flink = (_LIST_ENTRY *)v7;
    }
    while ( v7 != (FxChildList *)&this->m_DescriptionListHead );
  }
  v5 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v6 = v5;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead);
}
