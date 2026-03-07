__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetSupportedModes(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _VideoModeDescriptor *a4)
{
  return DisplayID_GetSupportedModes((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2, a3, a4);
}
