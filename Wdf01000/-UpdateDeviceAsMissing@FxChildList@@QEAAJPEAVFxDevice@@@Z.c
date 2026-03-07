__int64 __fastcall FxChildList::UpdateDeviceAsMissing(FxChildList *this, FxDevice *Device)
{
  unsigned __int64 *p_m_ListLock; // rbp
  char v5; // bl
  KIRQL v6; // al
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 *p_m_StaticList; // r8
  KIRQL v9; // r14
  FxDevice *v10; // r9
  _LIST_ENTRY *v11; // rdx
  FxDevice *v12; // rcx
  unsigned __int8 v13; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Blink = this->m_ModificationListHead.Blink;
  p_m_StaticList = &this->m_StaticList;
  v9 = v6;
  if ( Blink == &this->m_ModificationListHead )
  {
LABEL_7:
    v11 = this->m_DescriptionListHead.Blink;
    if ( v11 != &this->m_DescriptionListHead )
    {
      while ( 1 )
      {
        v12 = (FxDevice *)(*p_m_StaticList ? v11[1].Blink->Blink : v11[4].Flink);
        if ( v12 == Device )
          break;
        v11 = v11->Blink;
        if ( v11 == &this->m_DescriptionListHead )
          goto LABEL_17;
      }
      v5 = 1;
      if ( (unsigned int)(LODWORD(v11[1].Flink) - 1) <= 1 )
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)v11, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = (FxDevice *)(*p_m_StaticList ? Blink[-1].Flink->Blink : Blink[1].Blink);
      if ( v10 == Device )
        break;
      Blink = Blink->Blink;
      if ( Blink == &this->m_ModificationListHead )
        goto LABEL_7;
    }
    v5 = 1;
    FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Blink[-3].Blink);
  }
LABEL_17:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v9);
  FxChildList::DrainFreeListHead(this, &freeHead, v13);
  return v5 == 0 ? 0xC000000E : 0;
}
