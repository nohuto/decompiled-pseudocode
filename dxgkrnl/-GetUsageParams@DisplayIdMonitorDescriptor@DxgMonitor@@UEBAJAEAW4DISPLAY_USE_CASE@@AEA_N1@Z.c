__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetUsageParams(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  *a3 = 0;
  *a4 = 1;
  return DisplayID_GetPrimaryUseCase((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
