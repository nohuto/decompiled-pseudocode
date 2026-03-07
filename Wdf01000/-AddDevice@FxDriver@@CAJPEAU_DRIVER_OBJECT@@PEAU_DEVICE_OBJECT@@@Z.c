int __fastcall FxDriver::AddDevice(_DRIVER_OBJECT *DriverObject, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  FxDriver *v3; // rcx

  v3 = *(FxDriver **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  if ( v3 )
    return FxDriver::AddDevice(v3, PhysicalDeviceObject);
  else
    return -1073741823;
}
