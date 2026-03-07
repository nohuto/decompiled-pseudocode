DxgMonitor::MonitorDisplayPortState *__fastcall DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(
        DxgMonitor::MonitorDisplayPortState *this,
        const struct DxgMonitor::IMonitorComponentParent *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  *(_OWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  return this;
}
