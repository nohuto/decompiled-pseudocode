void __fastcall FxChildList::UpdateAllAsPresent(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // rdi
  KIRQL v4; // si
  _LIST_ENTRY *Flink; // rdx
  FxChildList *v6; // rcx
  _LIST_ENTRY *i; // rdx
  unsigned __int8 v8; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  p_m_ListLock = &this->m_ListLock;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Flink = this->m_ModificationListHead.Flink;
  if ( Flink != &this->m_ModificationListHead )
  {
    do
    {
      v6 = (FxChildList *)Flink->Flink;
      if ( LODWORD(Flink[1].Flink) == 1 )
        LOBYTE(Flink[2].Blink) = 1;
      Flink = (_LIST_ENTRY *)v6;
    }
    while ( v6 != (FxChildList *)&this->m_ModificationListHead );
  }
  for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
  {
    if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && LODWORD(i[3].Blink) != 2 )
      LOBYTE(i[5].Flink) = 1;
  }
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v4);
  FxChildList::DrainFreeListHead(this, &freeHead, v8);
}
