unsigned __int8 __fastcall imp_WdfWmiProviderIsEnabled(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider,
        _WDF_WMI_PROVIDER_CONTROL ProviderControl)
{
  char v4; // bl
  int v5; // edi
  FxWmiProvider *pProvider; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  pProvider = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WmiProvider,
    0x1004u,
    (void **)&pProvider);
  v5 = ProviderControl - 1;
  if ( !v5 )
    return pProvider->m_EventControlEnabled;
  if ( v5 == 1 )
    return pProvider->m_DataBlockControlEnabled;
  return v4;
}
