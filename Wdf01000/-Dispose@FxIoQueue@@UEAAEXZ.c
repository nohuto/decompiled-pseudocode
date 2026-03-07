unsigned __int8 __fastcall FxIoQueue::Dispose(FxIoQueue *this)
{
  bool v1; // zf
  unsigned __int8 v3; // r8
  FxPkgIo *m_PkgIo; // rdi
  unsigned __int8 v5; // r8
  FxIoQueueNode *p_m_IoPkgListNode; // rax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v9; // dl
  unsigned __int16 v10; // r9
  void *ObjectHandleUnchecked; // rax
  unsigned __int8 v12; // dl
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  v1 = (this->m_ObjectFlags & 8) == 0;
  irql = 0;
  if ( !v1 )
  {
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v3);
    m_PkgIo = this->m_PkgIo;
    this->m_Disposing = 1;
    PreviousIrql = 0;
    FxNonPagedObject::Lock(m_PkgIo, &PreviousIrql, v5);
    p_m_IoPkgListNode = &this->m_IoPkgListNode;
    Flink = this->m_IoPkgListNode.m_ListEntry.Flink;
    if ( (FxIoQueueNode *)Flink->Blink != &this->m_IoPkgListNode
      || (Blink = this->m_IoPkgListNode.m_ListEntry.Blink, (FxIoQueueNode *)Blink->Flink != p_m_IoPkgListNode) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v9 = PreviousIrql;
    this->m_IoPkgListNode.m_ListEntry.Blink = &this->m_IoPkgListNode.m_ListEntry;
    p_m_IoPkgListNode->m_ListEntry.Flink = &p_m_IoPkgListNode->m_ListEntry;
    FxNonPagedObject::Unlock(m_PkgIo, v9, (unsigned __int8)Flink);
    FxIoQueue::DispatchEvents(this, irql, 0LL, v10);
    ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this);
    _FX_DRIVER_GLOBALS::WaitForSignal(
      this->m_Globals,
      &this->m_FinishDisposing,
      "waiting for the queue to be deleted, WDFQUEUE",
      ObjectHandleUnchecked,
      this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::FreeAllReservedRequests(this, v12);
    m_FwdProgContext = this->m_FwdProgContext;
    if ( m_FwdProgContext )
    {
      m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree((FX_POOL_TRACKER *)this->m_FwdProgContext);
      this->m_FwdProgContext = 0LL;
    }
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
      this->m_SystemWorkItem = 0LL;
    }
    if ( this->m_DpcQueued )
      KeFlushQueuedDpcs();
  }
  return 1;
}
