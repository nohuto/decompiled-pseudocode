int __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int result; // eax
  FxRegKey *v11; // rax
  FxObject *v12; // rax
  FxObject *v13; // rdi
  NTSTATUS v14; // ebx
  signed int v15; // eax
  void *hKey; // [rsp+40h] [rbp-61h] BYREF
  WDFKEY__ *status; // [rsp+48h] [rbp-59h] BYREF
  _UNICODE_STRING parameters; // [rsp+50h] [rbp-51h] BYREF
  FxDriver *pDriver; // [rsp+60h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDriver = 0LL;
  hKey = 0LL;
  status = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(v5, KeyAttributes, 0);
    if ( result >= 0 )
    {
      FxObjectHandleGetPtr(v5, Driver, 0x1001u, (void **)&pDriver);
      *(_QWORD *)&parameters.Length = 0LL;
      parameters.Buffer = (wchar_t *)64;
      v11 = (FxRegKey *)FxObjectHandleAllocCommon(
                          v5,
                          (FxPoolTypeOrPoolFlags *)&parameters,
                          0x78uLL,
                          0,
                          KeyAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( !v11 )
        return -1073741670;
      FxRegKey::FxRegKey(v11, v5);
      v13 = v12;
      if ( !v12 )
        return -1073741670;
      v14 = FxObject::Commit(v12, KeyAttributes, (void **)&status, 0LL, 1u);
      if ( v14 >= 0 )
      {
        if ( (DesiredAccess & 0x7FFDFFE6) != 0 )
        {
          WPP_IFR_SF_(v5, 3u, 6u, 0xAu, WPP_FxDriverApiKm_cpp_Traceguids);
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v14 = ZwOpenKey(&hKey, 0xF003Fu, &ObjectAttributes);
          if ( v14 >= 0 )
          {
            parameters.Buffer = parameters_buffer;
            ObjectAttributes.RootDirectory = hKey;
            wcscpy(parameters_buffer, L"Parameters");
            ObjectAttributes.ObjectName = &parameters;
            *(_QWORD *)&parameters.Length = 1441812LL;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v14 = ZwCreateKey((PHANDLE)&v13[1].m_Type, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
            if ( v14 >= 0 )
              *Key = status;
            ZwClose(hKey);
            if ( v14 >= 0 )
              return v14;
          }
        }
        else
        {
          v15 = IoOpenDriverRegistryKey(pDriver->m_DriverObject.m_DriverObject, 0LL, DesiredAccess, 0LL, &hKey);
          v14 = v15;
          if ( v15 >= 0 )
          {
            *(_QWORD *)&v13[1].m_Type = hKey;
            *Key = status;
            return v14;
          }
          WPP_IFR_SF_D(v5, 2u, 6u, 0xBu, WPP_FxDriverApiKm_cpp_Traceguids, v15);
        }
      }
      FxObject::ClearEvtCallbacks(v13);
      v13->DeleteObject(v13);
      return v14;
    }
  }
  return result;
}
