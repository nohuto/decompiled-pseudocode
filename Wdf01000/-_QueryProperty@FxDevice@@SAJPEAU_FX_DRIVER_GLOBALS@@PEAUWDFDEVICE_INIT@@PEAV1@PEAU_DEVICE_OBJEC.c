/*
 * XREFs of ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C003D0B0
 * Callers:
 *     imp_WdfFdoInitQueryProperty @ 0x1C0030110 (imp_WdfFdoInitQueryProperty.c)
 *     imp_WdfDeviceQueryProperty @ 0x1C0032EE0 (imp_WdfDeviceQueryProperty.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C003EB40 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C003F218 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 */

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
