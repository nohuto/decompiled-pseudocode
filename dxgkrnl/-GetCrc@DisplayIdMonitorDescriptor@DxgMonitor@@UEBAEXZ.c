unsigned __int8 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetCrc(DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  return *(_BYTE *)(*((unsigned int *)this + 9) + *((_QWORD *)this + 3) - 1LL);
}
