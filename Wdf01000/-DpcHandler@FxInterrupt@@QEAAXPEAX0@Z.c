void __fastcall FxInterrupt::DpcHandler(FxInterrupt *this, void *SystemArgument1, void *SystemArgument2)
{
  FxCallbackLock *m_CallbackLock; // rcx
  void *v5; // rax
  void *ObjectHandleUnchecked; // rax
  __int64 v7; // rdx
  void *irql; // [rsp+40h] [rbp+18h] BYREF

  irql = SystemArgument2;
  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    LOBYTE(irql) = 0;
    m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&irql);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(void *))this->m_EvtInterruptDpc)(ObjectHandleUnchecked);
    LOBYTE(v7) = (_BYTE)irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v7);
  }
  else
  {
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v5 = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(void *))this->m_EvtInterruptDpc)(v5);
  }
}
