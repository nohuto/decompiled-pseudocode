/*
 * XREFs of ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006D580
 * Callers:
 *     <none>
 * Callees:
 *     ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C03D0170 (--1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::DisplayIdMonitorDescriptor *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'(
        DxgMonitor::DisplayIdMonitorDescriptor *P,
        char a2)
{
  DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
