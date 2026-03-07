FxIoTarget *__fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxIoTarget *result; // rax
  FxDeviceBase *pDeviceBase; // [rsp+30h] [rbp+8h] BYREF

  pDeviceBase = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDeviceBase);
  result = pDeviceBase->GetDefaultIoTarget(pDeviceBase);
  if ( result )
    return (FxIoTarget *)FxObject::GetObjectHandleUnchecked(result);
  return result;
}
