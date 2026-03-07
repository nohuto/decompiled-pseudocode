_DEVICE_OBJECT *__fastcall FxIoTargetSelf::GetTargetDeviceObject(FxIoTargetSelf *this, FxDeviceBase *Device)
{
  return Device->m_DeviceObject.m_DeviceObject;
}
