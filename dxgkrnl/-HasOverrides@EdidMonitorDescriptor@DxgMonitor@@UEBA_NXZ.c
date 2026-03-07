bool __fastcall DxgMonitor::EdidMonitorDescriptor::HasOverrides(DxgMonitor::EdidMonitorDescriptor *this)
{
  return *((_DWORD *)this + 5) != 0;
}
