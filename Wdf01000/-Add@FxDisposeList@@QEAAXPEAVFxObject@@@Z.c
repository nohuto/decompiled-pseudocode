/*
 * XREFs of ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0041D2C
 * Callers:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006410 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008570 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C0047758 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0007508 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall FxDisposeList::Add(FxDisposeList *this, FxObject *Object, unsigned __int8 a3)
{
  _SINGLE_LIST_ENTRY *Next; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  Next = this->m_List.Next;
  *this->m_ListEnd = &Object->m_DisposeSingleEntry;
  this->m_ListEnd = &Object->m_DisposeSingleEntry.Next;
  if ( !Next )
    FxSystemWorkItem::EnqueueWorker(this->m_SystemWorkItem, FxDisposeList::_WorkItemThunk, this, 0);
  FxNonPagedObject::Unlock(this, irql, (unsigned __int8)Next);
}
