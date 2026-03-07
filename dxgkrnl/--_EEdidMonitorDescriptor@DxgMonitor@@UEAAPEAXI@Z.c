DxgMonitor::EdidMonitorDescriptor *__fastcall DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(
        DxgMonitor::EdidMonitorDescriptor *P,
        char a2)
{
  DxgMonitor::EdidMonitorDescriptor::~EdidMonitorDescriptor(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
