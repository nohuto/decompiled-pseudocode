void __fastcall FxDeviceDescriptionEntry::ProcessDeviceRemoved(FxDeviceDescriptionEntry *this)
{
  FxChildList *m_DeviceList; // rbx
  KIRQL v3; // dl
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // rax
  unsigned __int8 v7; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  FxVerifierCheckIrqlLevel(this->m_DeviceList->m_Globals, 0);
  m_DeviceList = this->m_DeviceList;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&m_DeviceList->m_ListLock);
  if ( !m_DeviceList->m_ScanCount || (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink == this )
  {
    Flink = this->m_DescriptionLink.Flink;
    if ( (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink->Blink != this
      || (Blink = this->m_DescriptionLink.Blink, (FxDeviceDescriptionEntry *)Blink->Flink != this)
      || (Blink->Flink = Flink, Flink->Blink = Blink, v6 = freeHead.Blink, freeHead.Blink->Flink != &freeHead) )
    {
      __fastfail(3u);
    }
    this->m_DescriptionLink.Blink = freeHead.Blink;
    this->m_DescriptionLink.Flink = &freeHead;
    v6->Flink = (_LIST_ENTRY *)this;
    freeHead.Blink = (_LIST_ENTRY *)this;
  }
  else
  {
    this->m_PendingDeleteOnScanEnd = 1;
  }
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v3);
  FxChildList::DrainFreeListHead(this->m_DeviceList, &freeHead, v7);
}
