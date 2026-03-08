/*
 * XREFs of ??_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006C160
 * Callers:
 *     <none>
 * Callees:
 *     ??1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C006C104 (--1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::MultiMonitorDescriptor *__fastcall DxgMonitor::MultiMonitorDescriptor::`scalar deleting destructor'(
        DxgMonitor::MultiMonitorDescriptor *P,
        char a2)
{
  DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
