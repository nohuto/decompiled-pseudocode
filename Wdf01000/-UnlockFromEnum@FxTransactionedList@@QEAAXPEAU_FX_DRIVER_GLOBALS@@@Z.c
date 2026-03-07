void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // rdi
  __int64 v5; // r8
  _LIST_ENTRY releaseHead; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  --this->m_ListLockedRecursionCount;
  FxTransactionedList::ProcessTransactionList(this, &releaseHead);
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  LOBYTE(v5) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v5);
  FxTransactionedList::ProcessObjectsToRelease(this, &releaseHead);
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
