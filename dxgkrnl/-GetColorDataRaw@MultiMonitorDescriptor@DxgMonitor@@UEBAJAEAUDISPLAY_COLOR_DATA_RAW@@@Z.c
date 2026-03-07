__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetColorDataRaw(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_COLOR_DATA_RAW *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_COLOR_DATA_RAW *))(**((_QWORD **)this + 2) + 120LL))(
           *((_QWORD *)this + 2),
           a2);
}
