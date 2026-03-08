/*
 * XREFs of ?Init@FxCompanionTarget@@AEAAJPEAVFxDevice@@@Z @ 0x1C002DF78
 * Callers:
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C003C064 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C002D3FC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 */

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
