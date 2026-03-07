int __fastcall FxDevice::ControlDeviceInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax

  this->m_Legacy = 1;
  result = FxDevice::CreateDevice(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( result >= 0 )
      return FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
  }
  return result;
}
