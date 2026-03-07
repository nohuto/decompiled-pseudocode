_DEVICE_OBJECT *__fastcall FxDevice::GetSafePhysicalDevice(FxDevice *this)
{
  if ( this->m_PdoKnown )
    return this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject;
  else
    return 0LL;
}
