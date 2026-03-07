__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetContainerId(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 2) + 216LL))(
           *((_QWORD *)this + 2),
           a2);
}
