bool __fastcall DXGMONITOR::HasDescriptor(DxgMonitor::MonitorDescriptorState **this)
{
  return (unsigned int)DxgMonitor::MonitorDescriptorState::GetNumMonitorDescriptors(this[27]) != 0;
}
