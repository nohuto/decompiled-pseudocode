int __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  void *ParentObject; // rdx
  FxDeviceBase *v11; // rax
  int result; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  FxObject *v14; // r8
  const void *_a2; // rax
  __int64 _a3; // rdx
  WDFDRIVER__ *Driver; // rdx
  FxIoQueue *v18; // rbx
  FxCxDeviceInfo **p_m_ExecutionLevel; // rcx
  FxCxDeviceInfo *i; // rax
  int v21; // esi
  unsigned __int8 v22; // r8
  FxDriver *pDriver; // [rsp+50h] [rbp-28h] BYREF
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+90h] [rbp+18h] BYREF

  pParent = 0LL;
  pQueue = 0LL;
  pDriver = 0LL;
  m_Globals = this->m_Globals;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v11 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v11 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, -1073741808);
      return -1073741808;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v11 != m_DeviceBase )
    {
      FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v14);
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return -1073741808;
    }
  }
  else
  {
    pParent = this;
  }
  if ( Config->Size > 0x58 )
  {
    Driver = Config->Driver;
    if ( Driver )
      FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  }
  result = FxIoQueue::_Create(m_Globals, QueueAttributes, Config, Caller, this, this->m_PowerStateOn, &pQueue);
  if ( result >= 0 )
  {
    v18 = pQueue;
    if ( pDriver )
    {
      p_m_ExecutionLevel = (FxCxDeviceInfo **)&this->m_DeviceBase[1].m_ExecutionLevel;
      for ( i = *p_m_ExecutionLevel; i != (FxCxDeviceInfo *)p_m_ExecutionLevel; i = (FxCxDeviceInfo *)i->ListEntry.Flink )
      {
        if ( i->Driver == pDriver )
          goto LABEL_19;
      }
      i = 0LL;
LABEL_19:
      pQueue->m_CxDeviceInfo = i;
    }
    v21 = FxObject::Commit(v18, QueueAttributes, 0LL, (_FX_DRIVER_GLOBALS *)pParent, 1u);
    if ( v21 >= 0 )
    {
      FxPkgIo::AddIoQueue(this, v18, v22);
      *ppQueue = v18;
    }
    else
    {
      FxObject::ClearEvtCallbacks(v18);
      ((void (*)(void))v18->DeleteObject)();
    }
    return v21;
  }
  return result;
}
