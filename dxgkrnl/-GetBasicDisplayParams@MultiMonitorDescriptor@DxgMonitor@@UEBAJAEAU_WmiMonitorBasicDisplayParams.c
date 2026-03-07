__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorBasicDisplayParams *))(**((_QWORD **)this + 2) + 136LL))(
           *((_QWORD *)this + 2),
           a2);
}
