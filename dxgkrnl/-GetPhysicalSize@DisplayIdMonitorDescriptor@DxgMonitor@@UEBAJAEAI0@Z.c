__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetPhysicalSize(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  return DisplayID_GetPhysicalSize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2, a3);
}
