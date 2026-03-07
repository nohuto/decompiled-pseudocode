_DEVICE_OBJECT *__fastcall FxIoTarget::GetTargetDeviceObject(FxIoTarget *this, FxDeviceBase *Device)
{
  return Device->m_AttachedDevice.m_DeviceObject;
}
