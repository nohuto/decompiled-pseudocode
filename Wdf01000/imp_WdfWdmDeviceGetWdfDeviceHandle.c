WDFDEVICE__ *__fastcall imp_WdfWdmDeviceGetWdfDeviceHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *DeviceObject)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(*((FxObject **)DeviceObject->DeviceExtension - 6));
}
