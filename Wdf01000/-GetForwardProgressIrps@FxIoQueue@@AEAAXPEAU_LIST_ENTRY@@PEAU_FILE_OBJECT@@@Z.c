/*
 * XREFs of ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C0067638
 * Callers:
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C006575C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00658E8 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1C00675B4 (-GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxIoQueue::GetForwardProgressIrps(FxIoQueue *this, _LIST_ENTRY *IrpListHead, _FILE_OBJECT *FileObject)
{
  _LIST_ENTRY **ForwardProgressIrpLocked; // rax
  KIRQL v7; // r11
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v9; // rcx

  KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  while ( 1 )
  {
    ForwardProgressIrpLocked = FxIoQueue::GetForwardProgressIrpLocked(this, FileObject);
    if ( !ForwardProgressIrpLocked )
      break;
    Blink = IrpListHead->Blink;
    v9 = (_LIST_ENTRY *)(ForwardProgressIrpLocked + 21);
    if ( Blink->Flink != IrpListHead )
      __fastfail(3u);
    v9->Flink = IrpListHead;
    ForwardProgressIrpLocked[22] = Blink;
    Blink->Flink = v9;
    IrpListHead->Blink = v9;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v7);
}
