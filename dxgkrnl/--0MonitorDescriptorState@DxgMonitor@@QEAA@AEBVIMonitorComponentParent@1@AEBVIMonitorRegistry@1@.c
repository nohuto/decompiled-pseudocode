DxgMonitor::MonitorDescriptorState *__fastcall DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
        DxgMonitor::MonitorDescriptorState *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        const struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorDescriptorState *result; // rax

  *((_DWORD *)this + 26) = 1;
  ExInitializeResourceLite((PERESOURCE)this);
  *((_QWORD *)this + 14) = a2;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  result = this;
  *((_QWORD *)this + 15) = a3;
  return result;
}
