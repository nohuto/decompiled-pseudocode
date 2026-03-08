/*
 * XREFs of ?Invoke@FxFileObjectFileCreate@@QEAAXPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x1C008592C
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxFileObjectFileCreate::Invoke(
        FxFileObjectFileCreate *this,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request,
        WDFFILEOBJECT__ *FileObject)
{
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v9; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Device, Request, FileObject);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v9) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v9);
    }
  }
}
