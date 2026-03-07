__int64 __fastcall FxDriver::AddDevice(FxDriver *this, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  WDFDRIVER__ *ObjectHandleUnchecked; // rbx
  FxCallbackLock *m_CallbackLock; // rcx
  int v7; // eax
  __int64 v8; // rdx
  FxCallbackLock *v9; // rcx
  int v10; // ebx
  _FX_DRIVER_GLOBALS *v11; // rcx
  unsigned __int8 v13[16]; // [rsp+30h] [rbp-3E8h] BYREF
  WDFDEVICE_INIT init; // [rsp+40h] [rbp-3D8h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxDriverKm_cpp_Traceguids, PhysicalDeviceObject);
  init.InitType = FxDeviceInitTypeFdo;
  init.CreatedOnStack = 1;
  init.Fdo.PhysicalDevice = PhysicalDeviceObject;
  ObjectHandleUnchecked = (WDFDRIVER__ *)FxObject::GetObjectHandleUnchecked(this);
  if ( this->m_DriverDeviceAdd.Method )
  {
    m_CallbackLock = this->m_DriverDeviceAdd.m_CallbackLock;
    v13[0] = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, v13);
    v7 = this->m_DriverDeviceAdd.Method(ObjectHandleUnchecked, &init);
    v9 = this->m_DriverDeviceAdd.m_CallbackLock;
    v10 = v7;
    if ( v9 )
    {
      LOBYTE(v8) = v13[0];
      v9->Unlock(v9, v8);
    }
  }
  else
  {
    v10 = -1073741823;
  }
  if ( init.CreatedDevice )
  {
    if ( v10 < 0 )
      v10 = FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)init.CreatedDevice, v10, 1u);
    else
      *(_DWORD *)(*((_QWORD *)init.CreatedDevice + 18) + 48LL) &= ~0x80u;
    v11 = this->m_Globals;
    if ( v11->FxVerboseOn )
      WPP_IFR_SF_D(v11, 5u, 0xCu, 0xDu, WPP_FxDriverKm_cpp_Traceguids, v10);
  }
  else
  {
    WPP_IFR_SF_D(this->m_Globals, 3u, 0xCu, 0xBu, WPP_FxDriverKm_cpp_Traceguids, v10);
    if ( init.Fdo.Filter && v10 < 0 )
    {
      WPP_IFR_SF_D(this->m_Globals, 4u, 0xCu, 0xCu, WPP_FxDriverKm_cpp_Traceguids, v10);
      v10 = 0;
    }
  }
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return (unsigned int)v10;
}
