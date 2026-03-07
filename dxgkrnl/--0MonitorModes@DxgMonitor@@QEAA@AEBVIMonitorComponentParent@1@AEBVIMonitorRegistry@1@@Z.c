DxgMonitor::MonitorModes *__fastcall DxgMonitor::MonitorModes::MonitorModes(
        DxgMonitor::MonitorModes *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        const struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorModes *result; // rax

  *((_DWORD *)this + 26) = 1;
  ExInitializeResourceLite((PERESOURCE)this);
  *((_QWORD *)this + 29) = a2;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  *((_QWORD *)this + 23) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 176;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  result = this;
  *((_QWORD *)this + 30) = a3;
  *((_DWORD *)this + 28) = 3;
  *((_BYTE *)this + 116) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 1024;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  return result;
}
