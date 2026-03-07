void __fastcall FxChildList::NotifyDeviceSurpriseRemove(FxChildList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  KIRQL v3; // bp
  FxChildList *Flink; // rcx
  FxChildList *v5; // r11
  _LIST_ENTRY *p_m_DescriptionListHead; // rbx
  _LIST_ENTRY *i; // r10
  _LIST_ENTRY *j; // rax
  unsigned __int8 v9; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  m_Globals = this->m_Globals;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(m_Globals, 0);
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Flink = (FxChildList *)this->m_ModificationListHead.Flink;
  if ( Flink != (FxChildList *)&this->m_ModificationListHead )
  {
    do
    {
      v5 = (FxChildList *)Flink->__vftable;
      if ( LODWORD(Flink->m_Globals) == 1 )
        FxChildList::MarkModificationNotPresentWorker(
          this,
          &freeHead,
          (FxDeviceDescriptionEntry *)&Flink[-1].m_ScanCount);
      Flink = v5;
    }
    while ( v5 != (FxChildList *)&this->m_ModificationListHead );
  }
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  for ( i = this->m_DescriptionListHead.Flink; i != p_m_DescriptionListHead; i = i->Flink )
  {
    if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 )
      FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
  }
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  for ( j = p_m_DescriptionListHead->Flink; j != p_m_DescriptionListHead; j = j->Flink )
  {
    if ( LODWORD(j[1].Flink) == 4 )
      LODWORD(j[1].Flink) = 3;
  }
  KeReleaseSpinLock(&this->m_ListLock, v3);
  FxChildList::DrainFreeListHead(this, &freeHead, v9);
}
