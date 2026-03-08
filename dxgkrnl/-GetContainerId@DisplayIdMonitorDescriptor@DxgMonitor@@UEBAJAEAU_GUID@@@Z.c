/*
 * XREFs of ?GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x1C03CBF70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x1C0071D8C (-DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetContainerId(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _GUID *a2)
{
  return DisplayID_GetContainerID((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
