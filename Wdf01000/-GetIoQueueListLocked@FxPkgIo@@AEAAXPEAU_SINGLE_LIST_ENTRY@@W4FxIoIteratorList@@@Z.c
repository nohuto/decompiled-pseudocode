void __fastcall FxPkgIo::GetIoQueueListLocked(FxPkgIo *this, _SINGLE_LIST_ENTRY *SListHead, void *ListType)
{
  _LIST_ENTRY *p_m_IoQueueListHead; // rbx
  _LIST_ENTRY *j; // rdi
  _LIST_ENTRY *i; // rdi

  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( (_DWORD)ListType == 1 )
    goto LABEL_8;
  if ( (_DWORD)ListType != 2 )
    return;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
LABEL_8:
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
      GetIoQueueList_ProcessQueueListEntry(i, SListHead, ListType);
  }
  else
  {
    for ( j = p_m_IoQueueListHead->Flink; j != p_m_IoQueueListHead; j = j->Flink )
      GetIoQueueList_ProcessQueueListEntry(j, SListHead, ListType);
  }
}
