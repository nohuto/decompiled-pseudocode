/*
 * XREFs of ?GetSupportedModes@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z @ 0x1C03CC100
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0072ED8 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetSupportedModes(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _VideoModeDescriptor *a4)
{
  return DisplayID_GetSupportedModes((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2, a3, a4);
}
