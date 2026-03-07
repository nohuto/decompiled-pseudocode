__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_DVLL_CAPS *))(**((_QWORD **)this + 1) + 168LL))(
           *((_QWORD *)this + 1),
           a2);
}
