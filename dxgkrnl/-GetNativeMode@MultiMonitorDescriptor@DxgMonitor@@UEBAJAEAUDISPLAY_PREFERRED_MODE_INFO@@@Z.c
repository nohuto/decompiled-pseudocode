__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetNativeMode(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_PREFERRED_MODE_INFO *))(**((_QWORD **)this + 2) + 184LL))(
           *((_QWORD *)this + 2),
           a2);
}
