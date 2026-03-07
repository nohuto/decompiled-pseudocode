__int64 __fastcall FxPkgGeneral::PostCreateDeviceInitialize(FxPkgGeneral *this, WDFDEVICE_INIT *Init)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned __int8 Flags; // cl
  NTSTATUS _a2; // ebx
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v7; // rsi
  _DEVICE_OBJECT *m_DeviceObject; // r14
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // eax
  FxDeviceBase *m_DeviceBase; // rax
  FxPkgIo *Blink; // rcx
  const void *_a1; // rax
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-69h] BYREF
  _WDF_IO_QUEUE_CONFIG queueConfig; // [rsp+80h] [rbp-29h] BYREF

  m_Globals = this->m_Globals;
  Flags = Init->Control.Flags;
  _a2 = 0;
  v7 = &this->96;
  if ( Flags )
  {
    m_DeviceObject = v7->m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( (Flags & 1) != 0
      && (_a2 = IoRegisterShutdownNotification(v7->m_DeviceBase->m_DeviceObject.m_DeviceObject), _a2 < 0)
      || (Init->Control.Flags & 2) != 0 && (_a2 = IoRegisterLastChanceShutdownNotification(m_DeviceObject), _a2 < 0) )
    {
      IoUnregisterShutdownNotification(m_DeviceObject);
      return (unsigned int)_a2;
    }
    this->m_EvtDeviceShutdown.m_Method = Init->Control.ShutdownNotification;
  }
  if ( (this->m_Flags & 0xC) != 0 )
  {
    memset(&queueConfig.PowerManaged, 0, 88);
    queueConfig.Size = 96;
    m_ExecutionLevel = this->m_ExecutionLevel;
    memset(&attributes.EvtDestroyCallback, 0, 40);
    attributes.ExecutionLevel = m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
    m_DeviceBase = v7->m_DeviceBase;
    *(_OWORD *)&attributes.Size = 0LL;
    queueConfig.DispatchType = WdfIoQueueDispatchManual;
    Blink = (FxPkgIo *)m_DeviceBase[3].m_ChildListHead.Blink;
    attributes.Size = 56;
    _a2 = FxPkgIo::CreateQueue(Blink, &queueConfig, &attributes, 0LL, &this->m_DefaultQueueForCreates);
    if ( _a2 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, _a2);
    }
  }
  return (unsigned int)_a2;
}
