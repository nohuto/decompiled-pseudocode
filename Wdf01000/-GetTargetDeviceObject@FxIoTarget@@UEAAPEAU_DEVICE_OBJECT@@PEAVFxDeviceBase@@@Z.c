/*
 * XREFs of ?GetTargetDeviceObject@FxIoTarget@@UEAAPEAU_DEVICE_OBJECT@@PEAVFxDeviceBase@@@Z @ 0x1C00096B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall FxIoTarget::GetTargetDeviceObject(FxIoTarget *this, FxDeviceBase *Device)
{
  return Device->m_AttachedDevice.m_DeviceObject;
}
