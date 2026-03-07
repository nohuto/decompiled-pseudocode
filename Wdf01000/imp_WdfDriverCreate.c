__int64 __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  _FX_DRIVER_GLOBALS *v6; // rbx
  _WDF_DRIVER_CONFIG *v11; // rdi
  unsigned int v12; // edi
  unsigned int DriverInitFlags; // eax
  __int64 result; // rax
  WDFDRIVER__ **v15; // r15
  _WDF_DRIVER_CONFIG *v16; // rdx
  unsigned int DriverPoolTag; // eax
  _WDF_DRIVER_CONFIG *v18; // r9
  FxDriver *v19; // rax
  FxDriver *v20; // rax
  FxObject *v21; // r14
  int v22; // esi
  FxObject *v23; // rcx
  WDFDRIVER__ *v24; // rdx
  bool v25; // al
  const _GUID *v26; // r8
  const _GUID *v27; // r9
  unsigned int DriverFlags; // ecx
  bool v29; // al
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  __int64 v31; // rcx
  _tlgWrapperByVal<1> v32; // [rsp+80h] [rbp-49h] BYREF
  FxAutoString imageName; // [rsp+90h] [rbp-39h] BYREF
  _tlgWrapperByVal<4> v34; // [rsp+A0h] [rbp-29h] BYREF
  _tlgWrapperByVal<4> v35; // [rsp+A4h] [rbp-25h] BYREF
  _tlgWrapperByVal<4> v36; // [rsp+A8h] [rbp-21h] BYREF
  _tlgWrapSz<unsigned short> v37; // [rsp+B0h] [rbp-19h] BYREF
  _tlgWrapSz<unsigned short> v38; // [rsp+B8h] [rbp-11h] BYREF
  _tlgWrapSz<char> v39; // [rsp+C0h] [rbp-9h] BYREF
  _tlgWrapperByRef<16> v40; // [rsp+C8h] [rbp-1h] BYREF
  _tlgWrapperByVal<8> v41; // [rsp+D0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+118h] [rbp+4Fh]
  WDFDRIVER__ *hDriver; // [rsp+120h] [rbp+57h] BYREF
  _tlgWrapperByVal<1> hProvider; // [rsp+128h] [rbp+5Fh] BYREF

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hDriver = 0LL;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v6->IsDriverCompanion = 0;
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v11 = DriverConfig;
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( DriverConfig->Size != 32 )
  {
    v12 = -1073741820;
    WPP_IFR_SF_dddd(v6, 2u, 0x11u, 0xAu, WPP_FxDriverApi_cpp_Traceguids, DriverConfig->Size, 32, 32, -1073741820);
    return v12;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFEC) != 0 )
  {
    WPP_IFR_SF_DDd(
      v6,
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      19,
      -1073741811);
    return 3221225485LL;
  }
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    if ( v6->IsDriverCompanion || (result = FxValidateUnicodeString(v6, RegistryPath), (int)result >= 0) )
    {
      if ( v6->Driver || DriverGlobals->Driver )
      {
        v12 = -1073741437;
        WPP_IFR_SF_qd(v6, 2u, 0x11u, 0xDu, WPP_FxDriverApi_cpp_Traceguids, DriverObject, -1073741437);
        return v12;
      }
      v15 = Driver;
      if ( Driver )
        *Driver = 0LL;
      FxDriver::_InitializeDriverName(v6, RegistryPath);
      if ( v11->Size == 32 && (DriverPoolTag = v11->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
      {
        v6->Tag = DriverPoolTag;
        v6->Public.DriverTag = v11->DriverPoolTag;
      }
      else
      {
        FxDriver::_InitializeTag(v6, v16);
      }
      if ( (v11->DriverInitFlags & 3) == 1 && v11->EvtDriverDeviceAdd )
      {
        WPP_IFR_SF_(v6, 2u, 0x11u, 0xEu, WPP_FxDriverApi_cpp_Traceguids);
        return 3221225485LL;
      }
      result = FxValidateObjectAttributes(v6, DriverAttributes, 7);
      if ( (int)result < 0 )
        return result;
      FxInitialize(v6, DriverObject, RegistryPath, v18);
      *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
      imageName.m_UnicodeString.Buffer = (wchar_t *)64;
      v19 = (FxDriver *)FxObjectHandleAllocCommon(
                          v6,
                          (FxPoolTypeOrPoolFlags *)&imageName,
                          0x170uLL,
                          0,
                          DriverAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( v19 && (FxDriver::FxDriver(v19, DriverObject, v11, v6), (v21 = v20) != 0LL) )
      {
        v22 = FxDriver::Initialize(v20, RegistryPath, v11, DriverAttributes);
        v23 = v21;
        if ( v22 >= 0 )
        {
          v22 = FxObject::Commit(v21, DriverAttributes, (void **)&hDriver, 0LL, 1u);
          v23 = v21;
          if ( v22 >= 0 )
          {
            v24 = hDriver;
            DriverGlobals->Driver = hDriver;
            v6->Driver = (FxDriver *)v21;
            v6->Public.DriverFlags |= v11->DriverInitFlags;
            v25 = (v11->DriverInitFlags & 3) == 0 || v11->EvtDriverUnload != 0LL;
            v6->Public.DisplaceDriverUnload = v25;
            if ( v15 )
              *v15 = v24;
            if ( v6->TelemetryContext )
            {
              imageName = 0LL;
              GetImageName(v6, &imageName.m_UnicodeString);
              if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 )
              {
                if ( tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
                {
                  DriverFlags = v6->Public.DriverFlags;
                  v34.Value = v6->FxEnhancedVerifierOptions;
                  v29 = (DriverFlags & 2) != 0;
                  hProvider.Value = DriverFlags & 1;
                  WdfBindInfo = v6->WdfBindInfo;
                  LOBYTE(hDriver) = v29;
                  v32.Value = v6->FxVerifierOn;
                  v35.Value = WdfBindInfo->Version.Minor;
                  v36.Value = WdfBindInfo->Version.Major;
                  v37.Psz = L"01.033.0";
                  v38.Psz = imageName.m_UnicodeString.Buffer;
                  v39.Psz = v6->Public.DriverName;
                  v40.Ptr = v6->TelemetryContext;
                  v41.Value = 16779264LL;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                    (const _tlgProvider_t *)WdfBindInfo,
                    (char *)&tlgEvent_0._tlgChannel,
                    v26,
                    v27,
                    &v41,
                    &v40,
                    &v39,
                    &v38,
                    &v37,
                    &v36,
                    &v35,
                    &v32,
                    &hProvider,
                    (const _tlgWrapperByVal<1> *)&hDriver,
                    &v34);
                }
              }
              FxAutoString::~FxAutoString(&imageName);
            }
            return (unsigned int)v22;
          }
        }
        FxObject::ClearEvtCallbacks(v23);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 48LL))(v31);
      }
      else
      {
        v22 = -1073741670;
      }
      FxDestroy(v6);
      return (unsigned int)v22;
    }
  }
  return result;
}
