/*
 * XREFs of ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C004F80C
 * Callers:
 *     ?AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z @ 0x1C003D810 (-AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00687EC (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C00711E4 (-AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00712E4 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00714D0 (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0078BF8 (-AddDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxTransactionedList::Add(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTransactionedEntry *Entry)
{
  __int64 v6; // r8
  int v7; // esi
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  if ( this->m_Deleting )
  {
    v7 = -1073741436;
  }
  else
  {
    v7 = this->ProcessAdd(this, Entry);
    if ( v7 >= 0 )
    {
      if ( this->m_ListLockedRecursionCount )
      {
        Entry->m_Transaction = FxTransactionActionAdd;
        Blink = this->m_TransactionHead.Blink;
        p_m_TransactionLink = &Entry->m_TransactionLink;
        if ( Blink->Flink == &this->m_TransactionHead )
        {
          p_m_TransactionLink->Flink = &this->m_TransactionHead;
          Entry->m_TransactionLink.Blink = Blink;
          Blink->Flink = p_m_TransactionLink;
          this->m_TransactionHead.Blink = p_m_TransactionLink;
          goto LABEL_10;
        }
      }
      else
      {
        v8 = this->m_ListHead.Blink;
        if ( v8->Flink == &this->m_ListHead )
        {
          Entry->m_ListLink.Flink = &this->m_ListHead;
          Entry->m_ListLink.Blink = v8;
          v8->Flink = &Entry->m_ListLink;
          this->m_ListHead.Blink = &Entry->m_ListLink;
          this->EntryAdded(this, Entry);
          goto LABEL_10;
        }
      }
      __fastfail(3u);
    }
  }
LABEL_10:
  LOBYTE(v6) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v6);
  return (unsigned int)v7;
}
