/*
 * XREFs of ?GetHdrLuminance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C03CBF90
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C007286C (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetHdrLuminance(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  return DisplayID_GetNativeLuminance((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a4, a3, a2, &v5);
}
