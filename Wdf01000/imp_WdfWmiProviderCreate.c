int __fastcall imp_WdfWmiProviderCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        WDFWMIPROVIDER__ **WmiProvider)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  WDFWMIPROVIDER__ **v9; // rsi
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF
  FxWmiProvider *pProvider; // [rsp+70h] [rbp+18h] BYREF

  pDevice = 0LL;
  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pProvider = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  if ( !WmiProviderConfig )
    FxVerifierNullBugCheck(v5, retaddr);
  v9 = WmiProvider;
  if ( !WmiProvider )
    FxVerifierNullBugCheck(v5, retaddr);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner
    || (!FxIsEqualGuid(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE) || !m_Owner->m_IdleSettings.WmiInstance)
    && (!FxIsEqualGuid(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE) || !m_Owner->m_WakeSettings.WmiInstance) )
  {
    return FxWmiProvider::_Create(v5, Device, ProviderAttributes, WmiProviderConfig, v9, &pProvider);
  }
  WPP_IFR_SF_(v5, 2u, 0x12u, 0xAu, WPP_FxWmiAPI_cpp_Traceguids);
  return -1073741055;
}
