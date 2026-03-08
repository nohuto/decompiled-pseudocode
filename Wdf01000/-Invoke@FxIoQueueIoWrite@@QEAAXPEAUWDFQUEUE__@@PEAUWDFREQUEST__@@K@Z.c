/*
 * XREFs of ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000FA60
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00050F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoQueueIoWrite::Invoke(
        FxIoQueueIoWrite *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int Length)
{
  unsigned __int64 v5; // rdi
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v9; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v5 = Length;
  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Request, v5);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v9) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v9);
    }
  }
}
