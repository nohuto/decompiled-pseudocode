/*
 * XREFs of ?GetTargetDeviceObject@FxIoTargetSelf@@UEAAPEAU_DEVICE_OBJECT@@PEAVFxDeviceBase@@@Z @ 0x1C00096C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall FxIoTargetSelf::GetTargetDeviceObject(FxIoTargetSelf *this, FxDeviceBase *Device)
{
  return Device->m_DeviceObject.m_DeviceObject;
}
