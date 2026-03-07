__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  int MonitorConfigurationFromRegistry; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  v2 = *((_QWORD *)this + 25);
  if ( *(_BYTE *)(v2 + 16) )
  {
    v3 = DxgMonitor::MonitorPnpState::OpenMonitorPnpKey(v2, 1, 2, &Handle);
    MonitorConfigurationFromRegistry = v3;
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(2LL, v3);
    }
    else
    {
      MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, Handle, 1u);
      if ( MonitorConfigurationFromRegistry >= 0 )
        MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
    }
  }
  else
  {
    MonitorConfigurationFromRegistry = -1073741275;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)MonitorConfigurationFromRegistry;
}
