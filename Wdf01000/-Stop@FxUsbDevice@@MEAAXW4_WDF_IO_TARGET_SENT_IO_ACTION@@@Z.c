void __fastcall FxUsbDevice::Stop(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_SENT_IO_ACTION v2; // r14d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // rdi
  FxUsbInterface *v8; // rbp
  FxUsbPipe **m_ConfiguredPipes; // rdx
  __int64 j; // rsi
  FxUsbPipe *v11; // rcx
  __int64 k; // rdi
  FxUsbInterface *v13; // rbp
  FxUsbPipe **v14; // rdx
  __int64 m; // rsi
  FxUsbPipe *v16; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  unsigned __int8 wait; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY head; // [rsp+70h] [rbp+18h] BYREF

  head.Next = 0LL;
  v2 = (int)Action;
  irql = 0;
  FxIoTarget::Stop(this, Action);
  if ( v2 != WdfIoTargetLeaveSentIoPending )
    FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, v4, 0LL);
  FxNonPagedObject::Lock(this, &irql, v5);
  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v8 = this->m_Interfaces[i];
    m_ConfiguredPipes = v8->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v8->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v11 = m_ConfiguredPipes[j];
        if ( v11 )
        {
          wait = 0;
          LOBYTE(v17) = 1;
          v11->GotoStopState(v11, v2, &head, &wait, v17);
          m_ConfiguredPipes = v8->m_ConfiguredPipes;
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v13 = this->m_Interfaces[k];
    v14 = v13->m_ConfiguredPipes;
    if ( v14 )
    {
      for ( m = 0LL; (unsigned int)m < v13->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v16 = v14[m];
        if ( v16 )
        {
          v16->WaitForSentIoToComplete(v16);
          v14 = v13->m_ConfiguredPipes;
        }
      }
    }
  }
  if ( v2 != WdfIoTargetLeaveSentIoPending )
  {
    this->m_InterfaceIterationLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_InterfaceIterationLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
}
