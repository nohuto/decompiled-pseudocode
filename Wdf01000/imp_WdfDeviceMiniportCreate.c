__int64 __fastcall imp_WdfDeviceMiniportCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *AttachedDeviceObject,
        _DEVICE_OBJECT *Pdo,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DEVICE_OBJECT *AttachedDevice; // rdi
  _DEVICE_OBJECT *PDO; // rbx
  __int64 result; // rax
  FxMpDevice *v13; // rax
  __int64 v14; // rax
  FxDeviceBase *v15; // rbx
  int Target; // edi
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDriver *pDriver; // [rsp+70h] [rbp+8h] BYREF

  pDriver = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  m_Globals = pDriver->m_Globals;
  if ( !DeviceObject )
    FxVerifierNullBugCheck(pDriver->m_Globals, retaddr);
  AttachedDevice = AttachedDeviceObject;
  PDO = Pdo;
  if ( AttachedDeviceObject )
  {
    if ( !Pdo )
      FxVerifierNullBugCheck(pDriver->m_Globals, retaddr);
  }
  else if ( Pdo )
  {
    FxVerifierNullBugCheck(pDriver->m_Globals, retaddr);
  }
  result = FxVerifierCheckIrqlLevel(pDriver->m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)&v17.UsePoolType = 0LL;
      v17.u.PoolFlags = 64LL;
      v13 = (FxMpDevice *)FxObjectHandleAllocCommon(m_Globals, &v17, 0xD0uLL, 0, Attributes, 0, FxObjectTypeExternal);
      if ( v13
        && (FxMpDevice::FxMpDevice(v13, m_Globals, pDriver, DeviceObject, AttachedDevice, PDO),
            (v15 = (FxDeviceBase *)v14) != 0LL) )
      {
        if ( AttachedDevice
          && (Target = FxDeviceBase::AllocateTarget((FxDeviceBase *)v14, (FxIoTarget **)(v14 + 200), 0), Target < 0)
          || (Target = FxDisposeList::_Create(m_Globals, v15->m_DeviceObject.m_DeviceObject, &v15->m_DisposeList),
              Target < 0)
          || (Target = FxDeviceBase::ConfigureConstraints(v15, Attributes), Target < 0)
          || (Target = FxObject::Commit(v15, Attributes, (void **)Device, 0LL, 1u), Target < 0) )
        {
          FxObject::ClearEvtCallbacks(v15);
          v15->DeleteObject(v15);
        }
        return (unsigned int)Target;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
