__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _UNICODE_STRING *))(**((_QWORD **)this + 1) + 72LL))(
           *((_QWORD *)this + 1),
           a2);
}
