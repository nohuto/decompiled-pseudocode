void __fastcall DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(DxgMonitor::MultiMonitorDescriptor *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
}
