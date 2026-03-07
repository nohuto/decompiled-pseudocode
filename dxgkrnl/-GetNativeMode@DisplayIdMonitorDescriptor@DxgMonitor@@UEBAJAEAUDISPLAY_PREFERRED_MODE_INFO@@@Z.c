__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetNativeMode(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  return DisplayID_GetPreferredMode((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
