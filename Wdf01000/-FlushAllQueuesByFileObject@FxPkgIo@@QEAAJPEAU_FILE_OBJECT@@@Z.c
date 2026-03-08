/*
 * XREFs of ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C0062754
 * Callers:
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010318 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?GetNextIoQueueLocked@FxPkgIo@@AEAAPEAVFxIoQueue@@PEAUFxIoQueueNode@@PEAX@Z @ 0x1C00628C4 (-GetNextIoQueueLocked@FxPkgIo@@AEAAPEAVFxIoQueue@@PEAUFxIoQueueNode@@PEAX@Z.c)
 *     ?FlushByFileObject@FxIoQueue@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0063DF0 (-FlushByFileObject@FxIoQueue@@QEAAXPEAU_FILE_OBJECT@@@Z.c)
 */

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
