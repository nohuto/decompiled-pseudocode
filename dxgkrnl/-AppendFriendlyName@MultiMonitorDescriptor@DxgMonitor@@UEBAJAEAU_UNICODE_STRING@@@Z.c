__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::AppendFriendlyName(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _UNICODE_STRING *))(**((_QWORD **)this + 2) + 104LL))(
           *((_QWORD *)this + 2),
           a2);
}
