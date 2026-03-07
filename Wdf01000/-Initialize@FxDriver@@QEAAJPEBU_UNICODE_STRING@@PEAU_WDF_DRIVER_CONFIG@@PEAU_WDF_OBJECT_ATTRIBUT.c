__int64 __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _DRIVER_OBJECT *m_DriverObject; // rdx
  int DriverObjectExtensionAndStoreFxDriver; // ebx
  __int64 v11; // rdx
  NTSTATUS (__fastcall *v12)(_DEVICE_OBJECT *, _IRP *); // r8
  unsigned __int16 v13; // r9
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v15; // r10
  unsigned __int16 v16; // cx
  void *v17; // rax
  unsigned __int64 v18; // rbp
  FX_POOL **v19; // rax
  wchar_t *v20; // rax
  wchar_t *Buffer; // rax
  unsigned int DriverInitFlags; // ecx
  _DRIVER_EXTENSION *DriverExtension; // rax
  __int64 v24; // rcx
  const _GUID *level; // [rsp+20h] [rbp-48h]
  __m128i v27; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  m_Globals = this->m_Globals;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_ObjectFlags |= 0x800u;
  FxDriver::ConfigureConstraints(this, DriverAttributes);
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( m_DriverObject )
  {
    DriverObjectExtensionAndStoreFxDriver = FxDisposeList::_Create(m_Globals, m_DriverObject, &this->m_DisposeList);
    if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
    {
      DriverObjectExtensionAndStoreFxDriver = FxDriver::AllocateDriverObjectExtensionAndStoreFxDriver(this);
      if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
      {
        if ( (Config->DriverInitFlags & 2) == 0 )
        {
          this->m_DriverDeviceAdd.Method = Config->EvtDriverDeviceAdd;
          this->m_DriverUnload.Method = Config->EvtDriverUnload;
        }
        if ( ArgRegistryPath )
        {
          Length = ArgRegistryPath->Length;
          v15 = this->m_Globals;
          this->m_RegistryPath.Length = ArgRegistryPath->Length;
          v27.m128i_i64[0] = 0LL;
          v16 = Length + 2;
          v27.m128i_i64[1] = 256LL;
          v17 = retaddr;
          this->m_RegistryPath.MaximumLength = v16;
          if ( !v15->FxPoolTrackingOn )
            v17 = 0LL;
          v18 = v16;
          v19 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, &v27, v16, v15->Tag, v17);
          this->m_RegistryPath.Buffer = (wchar_t *)v19;
          if ( v19 )
          {
            memmove(v19, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
            this->m_RegistryPath.Buffer[(v18 >> 1) - 1] = 0;
            v20 = wcsrchr(this->m_RegistryPath.Buffer, 0x5Cu);
            if ( v20 )
              Buffer = v20 + 1;
            else
              Buffer = this->m_RegistryPath.Buffer;
            this->m_ServiceName = Buffer;
          }
          else
          {
            *(_DWORD *)&this->m_RegistryPath.Length = 0;
            DriverObjectExtensionAndStoreFxDriver = -1073741670;
          }
        }
        if ( m_Globals->IsDriverCompanion )
        {
          this->m_DriverObject.m_DriverObject->DriverExtension->AddDevice = FxDriver::AddDevice;
          this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
        }
        else if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
        {
          DriverInitFlags = Config->DriverInitFlags;
          if ( (DriverInitFlags & 2) == 0 )
          {
            DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
            if ( (DriverInitFlags & 1) != 0 )
            {
              DriverExtension->AddDevice = 0LL;
              this->m_DriverObject.m_DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))((unsigned __int64)FxDriver::Unload & -(__int64)(Config->EvtDriverUnload != 0LL));
            }
            else
            {
              DriverExtension->AddDevice = FxDriver::AddDevice;
              this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
            }
            v24 = 112LL;
            v11 = 28LL;
            do
            {
              v12 = FxDevice::DispatchWithLock;
              *(_QWORD *)((char *)&this->m_DriverObject.m_DriverObject->Type + v24) = FxDevice::DispatchWithLock;
              v24 += 8LL;
              --v11;
            }
            while ( v11 );
          }
          if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
            this->m_DebuggerConnected = 1;
          if ( (Config->DriverInitFlags & 1) != 0 && !Config->EvtDriverUnload )
            WPP_IFR_SF_qZ(
              m_Globals,
              v11,
              (unsigned int)v12,
              v13,
              level,
              this->m_DriverObject.m_DriverObject,
              &this->m_RegistryPath);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)DriverObjectExtensionAndStoreFxDriver;
}
