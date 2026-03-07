void __fastcall FxChildList::MarkModificationNotPresentWorker(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *ModificationEntry)
{
  __int32 v5; // r8d
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *p_m_ModificationLink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v12; // rax

  v5 = ModificationEntry->m_ModificationState - 1;
  if ( !v5 )
  {
    p_m_ModificationLink = &ModificationEntry->m_ModificationLink;
    Flink = ModificationEntry->m_ModificationLink.Flink;
    if ( Flink->Blink == &ModificationEntry->m_ModificationLink )
    {
      Blink = ModificationEntry->m_ModificationLink.Blink;
      if ( Blink->Flink == p_m_ModificationLink )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        ModificationEntry->m_ModificationLink.Blink = &ModificationEntry->m_ModificationLink;
        p_m_ModificationLink->Flink = p_m_ModificationLink;
        if ( this->m_StaticList )
          ModificationEntry->m_ModificationState = ModificationNeedsPnpRemoval;
        v12 = FreeListHead->Blink;
        if ( v12->Flink == FreeListHead )
        {
          ModificationEntry->m_DescriptionLink.Flink = FreeListHead;
          ModificationEntry->m_DescriptionLink.Blink = v12;
          v12->Flink = (_LIST_ENTRY *)ModificationEntry;
          FreeListHead->Blink = (_LIST_ENTRY *)ModificationEntry;
          return;
        }
      }
    }
    goto LABEL_13;
  }
  if ( v5 != 3 )
    return;
  v6 = &ModificationEntry->m_ModificationLink;
  v7 = ModificationEntry->m_ModificationLink.Flink;
  if ( v7->Blink != &ModificationEntry->m_ModificationLink
    || (v8 = ModificationEntry->m_ModificationLink.Blink, v8->Flink != v6) )
  {
LABEL_13:
    __fastfail(3u);
  }
  v8->Flink = v7;
  v7->Blink = v8;
  ModificationEntry->m_ModificationLink.Blink = &ModificationEntry->m_ModificationLink;
  v6->Flink = v6;
  FxChildList::MarkDescriptionNotPresentWorker(this, ModificationEntry, 0);
}
