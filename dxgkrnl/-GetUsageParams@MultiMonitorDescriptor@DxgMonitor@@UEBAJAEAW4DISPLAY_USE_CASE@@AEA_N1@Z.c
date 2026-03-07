__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetUsageParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum DISPLAY_USE_CASE *, bool *, bool *))(**((_QWORD **)this + 2) + 224LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
