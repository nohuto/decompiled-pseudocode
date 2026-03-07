__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::AppendManufacturerName(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _UNICODE_STRING *))(**((_QWORD **)this + 1) + 64LL))(
           *((_QWORD *)this + 1),
           a2);
}
