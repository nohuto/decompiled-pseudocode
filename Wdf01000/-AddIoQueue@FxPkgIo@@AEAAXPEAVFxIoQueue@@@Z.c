/*
 * XREFs of ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C00620F0
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0062550 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall FxPkgIo::AddIoQueue(FxPkgIo *this, FxIoQueue *IoQueue, unsigned __int8 a3)
{
  _LIST_ENTRY *p_m_IoQueueListHead; // rbp
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  char Index; // si
  unsigned __int8 v8; // r8
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v11; // rdx
  FxIoQueueNode *p_m_IoPkgListNode; // rcx
  unsigned __int8 m_PowerManaged; // al
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  m_CxDeviceInfo = IoQueue->m_CxDeviceInfo;
  if ( m_CxDeviceInfo )
    Index = m_CxDeviceInfo->Index;
  else
    Index = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  for ( i = p_m_IoQueueListHead->Blink; i != p_m_IoQueueListHead; i = i->Blink )
  {
    if ( LODWORD(i[1].Flink) == 1 )
    {
      Flink = i[-34].Flink;
      if ( Flink )
        LOBYTE(Flink) = Flink[5].Blink;
      if ( (char)Flink <= Index )
        break;
    }
  }
  v11 = i->Flink;
  p_m_IoPkgListNode = &IoQueue->m_IoPkgListNode;
  if ( i->Flink->Blink != i )
    __fastfail(3u);
  p_m_IoPkgListNode->m_ListEntry.Flink = v11;
  IoQueue->m_IoPkgListNode.m_ListEntry.Blink = i;
  v11->Blink = &p_m_IoPkgListNode->m_ListEntry;
  i->Flink = &p_m_IoPkgListNode->m_ListEntry;
  m_PowerManaged = IoQueue->m_PowerManaged;
  if ( this->m_PowerStateOn )
  {
    if ( m_PowerManaged )
      IoQueue->m_PowerState = FxIoQueuePowerOn;
  }
  else
  {
    if ( m_PowerManaged )
      IoQueue->m_PowerState = FxIoQueuePowerOff;
    if ( this->m_QueuesAreShuttingDown )
      FxIoQueue::SetState(IoQueue, FxIoQueueSetShutdown|0x2);
  }
  FxNonPagedObject::Unlock(this, irql, v8);
}
