__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetNumericManufacturerIds(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, unsigned __int16 *))(**((_QWORD **)this + 1) + 112LL))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
