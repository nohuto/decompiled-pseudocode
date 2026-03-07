__int64 __fastcall FxChildList::UpdateAsMissing(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Description)
{
  unsigned __int64 *p_m_ListLock; // rbp
  unsigned int v5; // edi
  KIRQL v6; // r14
  FxDeviceDescriptionEntry *v7; // rax
  FxDeviceDescriptionEntry *v8; // rax
  unsigned __int8 v9; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Description);
  if ( v7 )
  {
    FxChildList::MarkModificationNotPresentWorker(this, &freeHead, v7);
  }
  else
  {
    v8 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Description);
    if ( v8 )
    {
      if ( (unsigned int)(v8->m_DescriptionState - 1) <= 1 )
        FxChildList::MarkDescriptionNotPresentWorker(this, v8, 0);
    }
    else
    {
      v5 = -1073741810;
    }
  }
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v9);
  return v5;
}
