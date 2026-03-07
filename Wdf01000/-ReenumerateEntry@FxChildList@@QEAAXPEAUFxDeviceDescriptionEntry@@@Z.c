void __fastcall FxChildList::ReenumerateEntry(FxChildList *this, FxDeviceDescriptionEntry *Entry)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v5; // bl
  unsigned __int8 v6; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ReenumerateEntryLocked(this, Entry, 0);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v5);
  FxChildList::DrainFreeListHead(this, &freeHead, v6);
}
