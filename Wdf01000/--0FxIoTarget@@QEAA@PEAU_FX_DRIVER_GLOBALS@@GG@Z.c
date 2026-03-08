/*
 * XREFs of ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0052648
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0038DFC (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C005969C (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005C26C (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0029A78 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?Construct@FxIoTarget@@AEAAXXZ @ 0x1C0052960 (-Construct@FxIoTarget@@AEAAXXZ.c)
 */

void __fastcall FxIoTarget::FxIoTarget(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned __int16 WdfType)
{
  unsigned __int8 v5; // dl

  FxNonPagedObject::FxNonPagedObject(this, WdfType, ObjectSize, FxDriverGlobals);
  this->__vftable = (FxIoTarget_vtbl *)FxIoTarget::`vftable';
  this->m_TransactionedEntry.m_TransactionedObject = 0LL;
  this->m_TransactionedEntry.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionedEntry.m_ListLink.Blink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_ListLink.Flink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_TransactionLink.Blink = &this->m_TransactionedEntry.m_TransactionLink;
  this->m_TransactionedEntry.m_TransactionLink.Flink = &this->m_TransactionedEntry.m_TransactionLink;
  FxCREvent::FxCREvent(&this->m_SentIoEvent, v5);
  this->m_PendedQueue.m_LockObject = 0LL;
  this->m_PendedQueue.m_CancelCallback = 0LL;
  this->m_PendedQueue.m_RequestCount = 0;
  this->m_PendedQueue.m_Queue.Blink = &this->m_PendedQueue.m_Queue;
  this->m_PendedQueue.m_Queue.Flink = &this->m_PendedQueue.m_Queue;
  FxIoTarget::Construct(this);
}
