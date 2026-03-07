NTSTATUS __fastcall FxDevice::_QueryProperty(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        unsigned int *ResultLength)
{
  _DEVICE_OBJECT *PhysicalDevice; // r10
  NTSTATUS result; // eax
  FxObject *v13; // rcx
  const void *_a1; // rax
  int v15; // r10d

  PhysicalDevice = RemotePdo;
  if ( !RemotePdo )
  {
    result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
    if ( result < 0 )
      return result;
    if ( DeviceInit )
    {
      PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
    }
    else
    {
      PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
      if ( !PhysicalDevice )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v13);
        WPP_IFR_SF_qd(FxDriverGlobals, 2u, v15 + 18, v15 + 26, WPP_FxDeviceKm_cpp_Traceguids, _a1, -1073741436);
        return -1073741436;
      }
    }
  }
  return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
