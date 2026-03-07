NTSTATUS __fastcall FxIoTargetRemote::RegisterForPnpNotification(FxIoTargetRemote *this)
{
  return IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           this->m_TargetFileObject,
           this->m_Driver->m_DriverObject.m_DriverObject,
           FxIoTargetRemote::_PlugPlayNotification,
           this,
           &this->m_TargetNotifyHandle);
}
