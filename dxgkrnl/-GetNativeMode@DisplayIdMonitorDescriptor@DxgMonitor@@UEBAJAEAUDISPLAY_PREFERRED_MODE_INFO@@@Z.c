/*
 * XREFs of ?GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C03CC010
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0072DA4 (-DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetNativeMode(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  return DisplayID_GetPreferredMode((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
