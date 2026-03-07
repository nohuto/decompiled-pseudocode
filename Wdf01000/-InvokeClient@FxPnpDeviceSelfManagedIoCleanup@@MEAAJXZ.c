__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeClient(FxPowerDeviceWakeFromSxTriggered *this)
{
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_Method = this->m_Method;
  if ( m_Method )
    m_Method(this->m_Device);
  return 0LL;
}
