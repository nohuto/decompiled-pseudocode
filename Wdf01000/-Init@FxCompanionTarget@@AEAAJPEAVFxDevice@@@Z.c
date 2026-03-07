__int64 __fastcall FxCompanionTarget::Init(FxCompanionTarget *this, FxDevice *Device)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  __int64 v3; // r9

  this->m_Device = Device;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  return FxCompanionLibrary::LoadCompanion(
           qword_1C009FF58,
           *(_FX_DRIVER_GLOBALS **)(v3 + 16),
           SafePhysicalDevice,
           (IDeviceCompanionCallbacks *)((v3 + 120) & -(__int64)(v3 != 0)),
           (IDeviceCompanion **)(v3 + 144));
}
