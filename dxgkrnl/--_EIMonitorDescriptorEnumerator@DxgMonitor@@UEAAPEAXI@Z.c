DxgMonitor::IMonitorDescriptorEnumerator *__fastcall DxgMonitor::IMonitorDescriptorEnumerator::`vector deleting destructor'(
        DxgMonitor::IMonitorDescriptorEnumerator *this,
        char a2)
{
  *(_QWORD *)this = &DxgMonitor::IMonitorDescriptorEnumerator::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
