DxgMonitor::DisplayIdMonitorDescriptor *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'(
        DxgMonitor::DisplayIdMonitorDescriptor *P,
        char a2)
{
  DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
