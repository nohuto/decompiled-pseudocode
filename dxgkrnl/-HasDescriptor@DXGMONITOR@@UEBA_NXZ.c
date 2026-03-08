/*
 * XREFs of ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x1C03C4810
 * Callers:
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C0994 (MonitorSetSDRWhiteLevelOverride.c)
 * Callees:
 *     ?GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ @ 0x1C01FF54C (-GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ.c)
 */

bool __fastcall DXGMONITOR::HasDescriptor(DxgMonitor::MonitorDescriptorState **this)
{
  return (unsigned int)DxgMonitor::MonitorDescriptorState::GetNumMonitorDescriptors(this[27]) != 0;
}
