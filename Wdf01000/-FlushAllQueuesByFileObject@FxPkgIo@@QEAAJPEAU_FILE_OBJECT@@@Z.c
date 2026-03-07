__int64 __fastcall FxPkgIo::FlushAllQueuesByFileObject(FxPkgIo *this, _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  void *v6; // r8
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v8; // r8
  FxIoQueue *NextIoQueueLocked; // rdi
  unsigned __int8 v10; // r8
  FxIoQueueNode flushBookmark; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
  flushBookmark.m_Type = FxIoQueueNodeTypeBookmark;
  flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
  irql = 0;
  if ( KeGetCurrentIrql() )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxNonPagedObject::Lock(this, &irql, v5);
    Flink = this->m_IoQueueListHead.Flink;
    if ( Flink->Blink != &this->m_IoQueueListHead )
      __fastfail(3u);
    flushBookmark.m_ListEntry.Flink = this->m_IoQueueListHead.Flink;
    flushBookmark.m_ListEntry.Blink = &this->m_IoQueueListHead;
    Flink->Blink = (_LIST_ENTRY *)&flushBookmark;
    this->m_IoQueueListHead.Flink = (_LIST_ENTRY *)&flushBookmark;
    while ( 1 )
    {
      NextIoQueueLocked = FxPkgIo::GetNextIoQueueLocked(this, &flushBookmark, v6);
      FxNonPagedObject::Unlock(this, irql, v10);
      if ( !NextIoQueueLocked )
        break;
      FxIoQueue::FlushByFileObject(NextIoQueueLocked, FileObject);
      NextIoQueueLocked->Release(
        NextIoQueueLocked,
        (void *)1937075302,
        1442,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      FxNonPagedObject::Lock(this, &irql, v8);
    }
  }
  return 0LL;
}
