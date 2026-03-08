/*
 * XREFs of ?UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x1C03CB800
 * Callers:
 *     <none>
 * Callees:
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C01FF334 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::UnloadDescriptorOverrides(DxgMonitor::EdidMonitorDescriptor *this)
{
  DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
}
