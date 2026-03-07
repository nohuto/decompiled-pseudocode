DxgMonitor::MultiMonitorDescriptor *__fastcall DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DxgMonitor::IMonitorDescriptor *a2,
        struct DxgMonitor::IMonitorDescriptor *a3)
{
  DxgMonitor::MultiMonitorDescriptor *result; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DxgMonitor::MultiMonitorDescriptor::`vftable';
  result = this;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  return result;
}
