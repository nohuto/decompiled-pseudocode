void __fastcall FxIoQueueIoInternalDeviceControl::Invoke(
        FxIoQueueIoInternalDeviceControl *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int OutputBufferLength,
        unsigned int InputBufferLength,
        unsigned int IoInternalControlCode)
{
  unsigned __int64 v7; // rdi
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v11; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v7 = OutputBufferLength;
  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Request, v7, InputBufferLength, IoInternalControlCode);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v11) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v11);
    }
  }
}
