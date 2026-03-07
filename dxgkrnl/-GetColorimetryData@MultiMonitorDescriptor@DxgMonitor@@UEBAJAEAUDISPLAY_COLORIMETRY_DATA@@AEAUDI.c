__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetColorimetryData(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_COLORIMETRY_DATA *, struct DISPLAY_COLOR_DEPTHS *))(**((_QWORD **)this + 2) + 128LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
