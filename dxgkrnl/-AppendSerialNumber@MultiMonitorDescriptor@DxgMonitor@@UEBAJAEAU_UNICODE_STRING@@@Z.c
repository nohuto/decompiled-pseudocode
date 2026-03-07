__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _UNICODE_STRING *))(**((_QWORD **)this + 1) + 80LL))(
           *((_QWORD *)this + 1),
           a2);
}
