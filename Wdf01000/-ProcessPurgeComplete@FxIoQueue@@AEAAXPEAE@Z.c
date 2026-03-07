void __fastcall FxIoQueue::ProcessPurgeComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  FxIoQueueIoState m_PurgeComplete; // xmm0
  void *m_PurgeCompleteContext; // rbp
  unsigned __int8 v7; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // r8
  const void *_a1; // rax
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-18h] BYREF

  m_PurgeComplete = this->m_PurgeComplete;
  m_PurgeCompleteContext = this->m_PurgeCompleteContext;
  this->m_PurgeComplete.Method = 0LL;
  this->m_PurgeCompleteContext = 0LL;
  v7 = *PreviousIrql;
  m_Globals = this->m_Globals;
  callback = m_PurgeComplete;
  FxNonPagedObject::Unlock(this, v7, a3);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x52u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( callback.Method )
  {
    ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoResume::Invoke(&callback, ObjectHandleUnchecked, m_PurgeCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v9);
}
