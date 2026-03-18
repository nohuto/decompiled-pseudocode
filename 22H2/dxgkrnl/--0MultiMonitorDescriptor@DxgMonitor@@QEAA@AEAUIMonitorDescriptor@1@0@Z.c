/*
 * XREFs of ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x1C006CD0C
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C020DD88 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03CBB64 (-CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorDescriptorState@Dxg.c)
 * Callees:
 *     <none>
 */

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
