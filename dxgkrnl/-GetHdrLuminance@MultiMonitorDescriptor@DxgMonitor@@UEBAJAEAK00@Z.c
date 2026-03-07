__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetHdrLuminance(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)this + 2)
                                                                                           + 160LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
