__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetSupportedModes(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _VideoModeDescriptor *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, struct _VideoModeDescriptor *))(**((_QWORD **)this + 2) + 192LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
