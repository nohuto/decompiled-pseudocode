WDFDEVICE__ *__fastcall imp_WdfWmiProviderGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIPROVIDER__ *WmiProvider)
{
  FxWmiProvider *pProvider; // [rsp+30h] [rbp+8h] BYREF

  pProvider = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WmiProvider,
    0x1004u,
    (void **)&pProvider);
  return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pProvider->m_Parent->m_DeviceBase);
}
