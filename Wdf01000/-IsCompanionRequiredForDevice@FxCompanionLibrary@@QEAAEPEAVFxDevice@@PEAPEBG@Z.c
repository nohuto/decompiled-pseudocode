char __fastcall FxCompanionLibrary::IsCompanionRequiredForDevice(
        FxCompanionLibrary *this,
        FxDevice *Device,
        FX_POOL ***CompanionName)
{
  FX_POOL **v3; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  char v7; // r12
  char v8; // r13
  NTSTATUS _a1; // eax
  unsigned __int16 v10; // r9
  unsigned int v11; // r8d
  NTSTATUS globals; // eax
  unsigned __int8 v13; // dl
  ULONG Tag; // ecx
  void *v15; // rax
  signed int IsCompanionSecure; // eax
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  int v19; // eax
  unsigned __int16 v20; // r9
  FxPropertyType traceGuid; // [rsp+20h] [rbp-E0h]
  unsigned __int8 secureCompanionFromInf[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int dataLength; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int dataType; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int propertyType; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int devCapSecureDevice; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int requiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  FxAutoRegKey kmdfSvcKey; // [rsp+68h] [rbp-98h] BYREF
  FxAutoRegKey deviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  _WDF_DEVICE_PROPERTY_DATA deviceData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  FxAutoRegKey companionRegKey; // [rsp+B0h] [rbp-50h] BYREF
  _UNICODE_STRING companionServiceListKeyName; // [rsp+B8h] [rbp-48h] BYREF
  void *companionSvcKey; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING companionKeyName; // [rsp+D0h] [rbp-30h] BYREF
  _UNICODE_STRING serviceNameUnicodeString; // [rsp+E0h] [rbp-20h] BYREF
  CUmdfSvcConfig umdfSvcConfig; // [rsp+F0h] [rbp-10h] BYREF
  FxDevice *v40; // [rsp+100h] [rbp+0h]
  wchar_t companionServiceListKeyName_buffer[24]; // [rsp+108h] [rbp+8h] BYREF
  wchar_t companionKeyName_buffer[32]; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v3 = 0LL;
  m_Globals = Device->m_Globals;
  serviceNameUnicodeString = 0LL;
  companionKeyName.Buffer = companionKeyName_buffer;
  wcscpy(companionKeyName_buffer, L"WUDF\\CompanionConfigurations");
  v40 = Device;
  deviceRegKey.m_Key = 0LL;
  companionRegKey.m_Key = 0LL;
  kmdfSvcKey.m_Key = 0LL;
  companionSvcKey = 0LL;
  wcscpy(companionServiceListKeyName_buffer, L"CompanionServiceList");
  *(_QWORD *)&companionKeyName.Length = 3801144LL;
  *(_QWORD *)&companionServiceListKeyName.Length = 2752552LL;
  companionServiceListKeyName.Buffer = companionServiceListKeyName_buffer;
  requiredSize = 0;
  dataLength = 0;
  dataType = 0;
  umdfSvcConfig.m_Key = 0LL;
  umdfSvcConfig.m_AutoClose = 1;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  secureCompanionFromInf[0] = 0;
  devCapSecureDevice = 0;
  propertyType = 0;
  v7 = 0;
  v8 = 0;
  _a1 = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, 0x20000u, &deviceRegKey.m_Key);
  if ( _a1 < 0 )
  {
    v10 = 22;
LABEL_3:
    v11 = 12;
LABEL_4:
    WPP_IFR_SF_D(m_Globals, 2u, v11, v10, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
LABEL_43:
    *CompanionName = v3;
    goto LABEL_48;
  }
  deviceData.PropertyKey = (const _DEVPROPKEY *)deviceRegKey.m_Key;
  *(_QWORD *)&deviceData.Size = 48LL;
  *(_QWORD *)&deviceData.Lcid = &companionKeyName;
  v32 = 576LL;
  v33 = 0LL;
  _a1 = ZwOpenKey(&companionRegKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
  if ( _a1 < 0 )
  {
    if ( _a1 == -1073741772 )
      goto LABEL_43;
    v10 = 23;
    goto LABEL_3;
  }
  GetNameFromPath(&m_Globals->Driver->m_RegistryPath, &serviceNameUnicodeString);
  if ( !serviceNameUnicodeString.Length )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x18u, WPP_FxCompanionLibrary_cpp_Traceguids);
    goto LABEL_43;
  }
  deviceData.PropertyKey = (const _DEVPROPKEY *)companionRegKey.m_Key;
  *(_QWORD *)&deviceData.Size = 48LL;
  *(_QWORD *)&deviceData.Lcid = &serviceNameUnicodeString;
  v32 = 576LL;
  v33 = 0LL;
  globals = ZwOpenKey(&kmdfSvcKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
  if ( globals < 0 )
  {
    if ( globals != -1073741772 )
      WPP_IFR_SF_Zd(
        m_Globals,
        v13,
        0xCu,
        0x19u,
        WPP_FxCompanionLibrary_cpp_Traceguids,
        &serviceNameUnicodeString,
        globals);
    goto LABEL_43;
  }
  _a1 = CUmdfSvcConfig::GetSecureSoftwareDeviceTag(&umdfSvcConfig, deviceRegKey.m_Key, &requiredSize);
  if ( _a1 < 0 )
  {
    if ( _a1 != -1073741772 )
    {
      v10 = 27;
      goto LABEL_20;
    }
  }
  else
  {
    WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x1Au, WPP_FxCompanionLibrary_cpp_Traceguids);
    v8 = 1;
  }
  _a1 = FxRegKey::_QueryValue(m_Globals, kmdfSvcKey.m_Key, &companionServiceListKeyName, 0, 0LL, &dataLength, 0LL);
  if ( (int)(_a1 + 0x80000000) >= 0 && _a1 != -2147483643 )
  {
    v10 = 28;
LABEL_20:
    v11 = 17;
    goto LABEL_4;
  }
  Tag = m_Globals->Tag;
  v15 = retaddr;
  *(_QWORD *)&deviceData.Size = 0LL;
  deviceData.PropertyKey = (const _DEVPROPKEY *)256;
  if ( !m_Globals->FxPoolTrackingOn )
    v15 = 0LL;
  v3 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&deviceData, dataLength, Tag, v15);
  if ( !v3 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x11u, 0x1Du, WPP_FxCompanionLibrary_cpp_Traceguids, 0xC000009A);
    goto LABEL_43;
  }
  IsCompanionSecure = FxRegKey::_QueryValue(
                        m_Globals,
                        kmdfSvcKey.m_Key,
                        &companionServiceListKeyName,
                        dataLength,
                        v3,
                        &dataLength,
                        &dataType);
  if ( IsCompanionSecure < 0 || dataType != 7 )
  {
    v18 = 30;
    goto LABEL_45;
  }
  if ( FxRegKey::_VerifyMultiSzString(m_Globals, &companionServiceListKeyName, (wchar_t *)v3, dataLength) < 0 )
  {
$exit_3:
    *CompanionName = 0LL;
    goto LABEL_47;
  }
  IsCompanionSecure = CUmdfSvcConfig::OpenServiceKey(&umdfSvcConfig, (const wchar_t *)v3, v17, &companionSvcKey);
  if ( IsCompanionSecure < 0 )
  {
    v18 = 31;
LABEL_45:
    WPP_IFR_SF_D(m_Globals, 2u, 0x11u, v18, WPP_FxCompanionLibrary_cpp_Traceguids, IsCompanionSecure);
    goto $exit_3;
  }
  IsCompanionSecure = CUmdfSvcConfig::IsCompanionSecure(companionSvcKey, secureCompanionFromInf);
  if ( IsCompanionSecure < 0 )
  {
    v18 = 32;
    goto LABEL_45;
  }
  if ( v8 || !secureCompanionFromInf[0] )
    goto LABEL_42;
  deviceData.PropertyKey = &DEVPKEY_Device_Capabilities;
  *(_QWORD *)&deviceData.Size = 24LL;
  *(_QWORD *)&deviceData.Lcid = 0LL;
  v19 = FxDevice::_QueryPropertyEx(
          m_Globals,
          0LL,
          v40,
          &deviceData,
          traceGuid,
          4u,
          &devCapSecureDevice,
          &requiredSize,
          &propertyType);
  if ( v19 >= 0 )
  {
    v19 = propertyType;
    if ( propertyType != 7 )
    {
      v20 = 34;
      goto LABEL_38;
    }
    if ( (devCapSecureDevice & 0x400) == 0 )
    {
      WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x23u, WPP_FxCompanionLibrary_cpp_Traceguids);
      goto LABEL_41;
    }
LABEL_42:
    v7 = 1;
    goto LABEL_43;
  }
  v20 = 33;
LABEL_38:
  WPP_IFR_SF_D(m_Globals, 2u, 0x11u, v20, WPP_FxCompanionLibrary_cpp_Traceguids, v19);
LABEL_41:
  *CompanionName = 0LL;
LABEL_47:
  FxPoolFree((FX_POOL_TRACKER *)v3);
LABEL_48:
  CUmdfSvcConfig::~CUmdfSvcConfig(&umdfSvcConfig);
  if ( kmdfSvcKey.m_Key )
    ZwClose(kmdfSvcKey.m_Key);
  if ( companionRegKey.m_Key )
    ZwClose(companionRegKey.m_Key);
  if ( deviceRegKey.m_Key )
    ZwClose(deviceRegKey.m_Key);
  return v7;
}
