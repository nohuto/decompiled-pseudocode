void __fastcall FxUsbDevice::Purge(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_PURGE_IO_ACTION v2; // r15d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // rdi
  FxUsbInterface *v8; // r14
  FxUsbPipe **m_ConfiguredPipes; // rcx
  __int64 j; // rsi
  FxUsbPipe *v11; // r10
  unsigned __int8 v12; // r8
  __int64 k; // rdi
  FxUsbInterface *v14; // r14
  FxUsbPipe **v15; // rdx
  __int64 m; // rsi
  FxUsbPipe *v17; // rcx
  int v18; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+98h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+A0h] [rbp+50h] BYREF

  sentHead.Next = 0LL;
  v2 = (int)Action;
  irql = 0;
  FxIoTarget::Purge(this, Action);
  if ( v2 != WdfIoTargetPurgeIo )
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
          pendedHead.Blink = &pendedHead;
          LOBYTE(v18) = 1;
          pendedHead.Flink = &pendedHead;
          v11->GotoPurgeState(v11, v2, &pendedHead, &sentHead, &wait, v18);
          FxIoTarget::CompletePendedRequestList(v8->m_ConfiguredPipes[j], &pendedHead, v12);
          m_ConfiguredPipes = v8->m_ConfiguredPipes;
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  FxIoTarget::_CancelSentRequests(&sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v14 = this->m_Interfaces[k];
    v15 = v14->m_ConfiguredPipes;
    if ( v15 )
    {
      for ( m = 0LL; (unsigned int)m < v14->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v17 = v15[m];
        if ( v17 )
        {
          v17->WaitForSentIoToComplete(v17);
          v15 = v14->m_ConfiguredPipes;
        }
      }
    }
  }
  if ( v2 != WdfIoTargetPurgeIo )
  {
    this->m_InterfaceIterationLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_InterfaceIterationLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
}
