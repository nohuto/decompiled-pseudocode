struct DxgMonitor::IMonitorDriverInterface *__fastcall DXGMONITOR::GetDriverInterface(DXGMONITOR *this)
{
  return (struct DxgMonitor::IMonitorDriverInterface *)*((_QWORD *)this + 24);
}
