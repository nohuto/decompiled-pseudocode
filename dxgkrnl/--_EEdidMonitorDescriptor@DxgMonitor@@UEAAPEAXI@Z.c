/*
 * XREFs of ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C001F1E0
 * Callers:
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@W7EAAPEAXI@Z @ 0x1C0027F00 (--_EEdidMonitorDescriptor@DxgMonitor@@W7EAAPEAXI@Z.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C01FF160 (-CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@.c)
 *     ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CB430 (-CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMonit.c)
 * Callees:
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C01FF0D4 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::EdidMonitorDescriptor *__fastcall DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(
        DxgMonitor::EdidMonitorDescriptor *P,
        char a2)
{
  DxgMonitor::EdidMonitorDescriptor::~EdidMonitorDescriptor(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
