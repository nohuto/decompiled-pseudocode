__int64 __fastcall FxIoQueue::Initialize(
        FxIoQueue *this,
        _WDF_IO_QUEUE_CONFIG *pConfig,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        unsigned __int8 InitialPowerStateOn)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  MxEvent *p_m_PowerIdle; // rbx
  __int64 result; // rax
  _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType; // r8d
  void (__fastcall *EvtIoDefault)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  unsigned int _a1; // ebx
  unsigned __int16 v15; // r9
  unsigned int NumberOfPresentedRequests; // ecx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v18; // r9
  _WDF_TRI_STATE PowerManaged; // ecx
  __int32 v20; // ecx
  FxIoQueuePowerState v21; // eax
  const void *v22; // rax
  unsigned __int8 v23; // dl
  const void *_a2; // rax
  int v25; // r8d

  m_Globals = this->m_Globals;
  p_m_PowerIdle = &this->m_PowerIdle;
  KeInitializeEvent(&this->m_PowerIdle.m_Event, NotificationEvent, 0);
  p_m_PowerIdle->m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_FinishDisposing.m_Event, NotificationEvent, 0);
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
  result = FxIoQueue::ConfigureConstraints(this, QueueAttributes, Caller);
  if ( (int)result >= 0 )
  {
    DispatchType = pConfig->DispatchType;
    if ( (unsigned int)(DispatchType - 1) > 2 )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      _a1 = -1073741811;
      WPP_IFR_SF_dqd(m_Globals, 2u, 0xDu, 0xCu, WPP_FxIoQueue_cpp_Traceguids, v25, _a2, -1073741811);
      return _a1;
    }
    EvtIoDefault = pConfig->EvtIoDefault;
    if ( DispatchType == WdfIoQueueDispatchManual )
    {
      if ( EvtIoDefault
        || pConfig->EvtIoRead
        || pConfig->EvtIoWrite
        || pConfig->EvtIoDeviceControl
        || pConfig->EvtIoInternalDeviceControl )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v18 = 16;
        goto LABEL_20;
      }
    }
    else if ( !EvtIoDefault
           && !pConfig->EvtIoRead
           && !pConfig->EvtIoWrite
           && !pConfig->EvtIoDeviceControl
           && !pConfig->EvtIoInternalDeviceControl )
    {
      _a1 = -1071644149;
      v15 = 15;
LABEL_10:
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, v15, WPP_FxIoQueue_cpp_Traceguids, _a1);
      return _a1;
    }
    if ( pConfig->Size > 0x50 )
    {
      NumberOfPresentedRequests = pConfig->Settings.Parallel.NumberOfPresentedRequests;
      if ( NumberOfPresentedRequests && ((DispatchType - 1) & 0xFFFFFFFD) == 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v18 = 17;
LABEL_20:
        _a1 = -1073741811;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, v18, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, -1073741811);
        return _a1;
      }
      this->m_MaxParallelQueuePresentedRequests = NumberOfPresentedRequests;
    }
    if ( this->m_PassiveLevel )
    {
      _a1 = FxSystemWorkItem::_Create(
              m_Globals,
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              &this->m_SystemWorkItem);
      if ( (_a1 & 0x80000000) != 0 )
      {
        v15 = 18;
        goto LABEL_10;
      }
    }
    this->m_Type = pConfig->DispatchType;
    PowerManaged = pConfig->PowerManaged;
    if ( PowerManaged )
    {
      v20 = PowerManaged - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
          this->m_PowerManaged = BYTE1(this->m_DeviceBase[1].m_Globals) == 0;
      }
      else
      {
        this->m_PowerManaged = 1;
      }
    }
    else
    {
      this->m_PowerManaged = 0;
    }
    if ( BYTE5(this->m_DeviceBase[1].m_Globals) )
      this->m_PowerManaged = 0;
    if ( this->m_PowerManaged )
      v21 = 2 - (InitialPowerStateOn != 0);
    else
      v21 = FxIoQueuePowerOn;
    this->m_PowerState = v21;
    this->m_AllowZeroLengthRequests = pConfig->AllowZeroLengthRequests;
    if ( m_Globals->FxVerboseOn )
    {
      v22 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqqqq(
        m_Globals,
        v23,
        0xDu,
        0x13u,
        WPP_FxIoQueue_cpp_Traceguids,
        pConfig->EvtIoDefault,
        pConfig->EvtIoRead,
        pConfig->EvtIoWrite,
        pConfig->EvtIoDeviceControl,
        v22);
    }
    this->m_IoDefault.Method = pConfig->EvtIoDefault;
    this->m_IoStop.Method = pConfig->EvtIoStop;
    this->m_IoResume.Method = pConfig->EvtIoResume;
    this->m_IoRead.Method = pConfig->EvtIoRead;
    this->m_IoWrite.Method = pConfig->EvtIoWrite;
    this->m_IoDeviceControl.Method = pConfig->EvtIoDeviceControl;
    this->m_IoInternalDeviceControl.Method = pConfig->EvtIoInternalDeviceControl;
    this->m_IoCanceledOnQueue.Method = pConfig->EvtIoCanceledOnQueue;
    FxIoQueue::SetState(this, FxIoQueueSetDispatchRequests|0x1);
    result = 0LL;
    this->m_Configured = 1;
  }
  return result;
}
