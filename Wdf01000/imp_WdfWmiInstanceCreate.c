int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  int result; // eax
  WDFWMIPROVIDER__ *Provider; // rdx
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  int v12; // esi
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  int v14; // eax
  FxWmiInstanceExternal *v15; // rdi
  __int64 v16; // rcx
  FxWmiInstanceExternal *pInstance; // [rsp+50h] [rbp-20h] BYREF
  WDFWMIINSTANCE__ *hInstance; // [rsp+58h] [rbp-18h] BYREF
  WDFWMIPROVIDER__ *hProvider; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxDevice *pDevice; // [rsp+A0h] [rbp+30h] BYREF
  FxWmiProvider *pProvider; // [rsp+B0h] [rbp+40h] BYREF

  pProvider = 0LL;
  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hInstance = 0LL;
  pInstance = 0LL;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      v5,
      (unsigned __int8)Device,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      64,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  ProviderConfig = InstanceConfig->ProviderConfig;
  if ( Provider )
  {
    if ( ProviderConfig )
    {
      v12 = -1073741811;
      WPP_IFR_SF_qqqd(
        v5,
        2u,
        0x12u,
        0xDu,
        WPP_FxWmiAPI_cpp_Traceguids,
        InstanceConfig,
        Provider,
        (__int64)ProviderConfig,
        -1073741811);
      return v12;
    }
    FxObjectHandleGetPtr(v5, (unsigned __int64)Provider, 0x1004u, (void **)&pProvider);
LABEL_19:
    v14 = FxWmiInstanceExternal::_Create(
            pProvider->m_Globals,
            pProvider,
            InstanceConfig,
            InstanceAttributes,
            &hInstance,
            &pInstance);
    v15 = pInstance;
    v12 = v14;
    if ( v14 < 0 || InstanceConfig->Register && (v12 = FxWmiProvider::AddInstance(pProvider, pInstance, 0), v12 < 0) )
    {
      if ( v15 )
      {
        FxObject::ClearEvtCallbacks(v15);
        ((void (*)(void))v15->DeleteObject)();
      }
      if ( InstanceConfig->ProviderConfig )
      {
        FxObject::ClearEvtCallbacks(pProvider);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
      }
    }
    else if ( Instance )
    {
      *Instance = hInstance;
    }
    return v12;
  }
  if ( !ProviderConfig )
  {
    v12 = -1073741811;
    WPP_IFR_SF_qd(v5, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, -1073741811);
    return v12;
  }
  pDevice = 0LL;
  hProvider = 0LL;
  FxObjectHandleGetPtr(v5, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner
    && (FxIsEqualGuid(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE)
     && m_Owner->m_IdleSettings.WmiInstance
     || FxIsEqualGuid(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE)
     && m_Owner->m_WakeSettings.WmiInstance) )
  {
    WPP_IFR_SF_(v5, 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
    return -1073741055;
  }
  result = FxWmiProvider::_Create(v5, Device, 0LL, InstanceConfig->ProviderConfig, &hProvider, &pProvider);
  if ( result >= 0 )
    goto LABEL_19;
  return result;
}
