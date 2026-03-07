void __fastcall FxUsbDevice::CleanupInterfacePipesAndDelete(FxUsbDevice *this, _FX_DRIVER_GLOBALS *UsbInterface)
{
  FxWaitLockInternal *p_m_InterfaceIterationLock; // rsi
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // r14
  FxUsbPipe **Flink; // rax
  unsigned __int8 v9; // dl
  __int64 j; // rdi
  FxUsbPipe *v11; // rcx
  int v12; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 wait; // [rsp+88h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+90h] [rbp+40h] BYREF

  sentHead.Next = 0LL;
  pendHead.Blink = &pendHead;
  p_m_InterfaceIterationLock = &this->m_InterfaceIterationLock;
  irql = 0;
  pendHead.Flink = &pendHead;
  FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, UsbInterface, 0LL);
  FxNonPagedObject::Lock(this, &irql, v5);
  for ( i = 0LL;
        (unsigned int)i < *(&UsbInterface->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized + 1);
        i = (unsigned int)(i + 1) )
  {
    Flink = (FxUsbPipe **)UsbInterface->FxPoolFrameworks.NonPagedHead.Flink;
    wait = 0;
    LOBYTE(v12) = 1;
    Flink[i]->GotoRemoveState(Flink[i], WdfIoTargetDeleted, &pendHead, &sentHead, v12, &wait);
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  for ( j = 0LL;
        (unsigned int)j < *(&UsbInterface->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized + 1);
        j = (unsigned int)(j + 1) )
  {
    v11 = (FxUsbPipe *)*((_QWORD *)&UsbInterface->FxPoolFrameworks.NonPagedHead.Flink->Flink + j);
    v11->WaitForSentIoToComplete(v11);
  }
  FxUsbInterface::CleanUpAndDelete((FxUsbInterface *)UsbInterface, v9);
  p_m_InterfaceIterationLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_InterfaceIterationLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
