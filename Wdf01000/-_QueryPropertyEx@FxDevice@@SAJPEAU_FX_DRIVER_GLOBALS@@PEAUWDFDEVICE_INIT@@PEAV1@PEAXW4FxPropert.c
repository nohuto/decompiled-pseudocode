int __fastcall FxDevice::_QueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID ResultLength,
        unsigned int *PropertyType,
        unsigned int *DriverGlobals_0)
{
  unsigned int *v9; // r14
  unsigned int *v11; // r15
  int result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rcx
  NTSTATUS DevicePropertyData; // ebx
  const void *ObjectHandleUnchecked; // rax
  unsigned int propType[4]; // [rsp+40h] [rbp-28h] BYREF

  v9 = PropertyType;
  v11 = DriverGlobals_0;
  propType[0] = 0;
  BufferLength = 0;
  *PropertyType = 0;
  *v11 = 0;
  result = FxDevice::_ValidateOpenKeyParams(DriverGlobals, DeviceInit, Device);
  if ( result >= 0 )
  {
    if ( DeviceInit )
    {
      PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
    }
    else
    {
      PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
      if ( !PhysicalDevice )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Device);
        DevicePropertyData = -1073741436;
        WPP_IFR_SF_qd(
          DriverGlobals,
          2u,
          0x12u,
          0x18u,
          WPP_FxDeviceKm_cpp_Traceguids,
          ObjectHandleUnchecked,
          -1073741436);
        return DevicePropertyData;
      }
    }
    DevicePropertyData = IoGetDevicePropertyData(
                           PhysicalDevice,
                           *((const DEVPROPKEY **)PropertyData + 1),
                           *((_DWORD *)PropertyData + 4),
                           0,
                           PropertyBuffer,
                           ResultLength,
                           &BufferLength,
                           propType);
    if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
    {
      *v9 = BufferLength;
      *v11 = propType[0];
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x19u, WPP_FxDeviceKm_cpp_Traceguids, DevicePropertyData);
    }
    return DevicePropertyData;
  }
  return result;
}
