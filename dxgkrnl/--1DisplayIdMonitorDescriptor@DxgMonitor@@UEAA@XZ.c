void __fastcall DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(
        DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  void *v1; // rax

  *(_QWORD *)this = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  v1 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v1 )
    operator delete(v1);
}
