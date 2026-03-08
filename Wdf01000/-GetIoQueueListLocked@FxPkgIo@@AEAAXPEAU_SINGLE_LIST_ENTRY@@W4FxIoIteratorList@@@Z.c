/*
 * XREFs of ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C000F97E
 * Callers:
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C00629F8 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0062B40 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0062CBC (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C0062880 (GetIoQueueList_ProcessQueueListEntry.c)
 */

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
