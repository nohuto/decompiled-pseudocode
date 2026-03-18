/*
 * XREFs of ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C020B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C001DD04 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D8390 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKK@Z @ 0x1C03D0068 (-_GetFinalMaxLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKKK@Z @ 0x1C03D00B8 (-_GetFinalMinLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKKK@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetHdrLuminance(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  int HDRCaps; // edi
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  unsigned int v10; // ecx
  unsigned int FinalMinLuminanceValueFromRaw; // eax
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int8 *v15; // [rsp+30h] [rbp-18h] BYREF

  v13 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v15, &v13);
  v14 = 0LL;
  HDRCaps = EDID_V1_GetHDRCaps(v13, v15, (struct DISPLAY_HDR_CAPS *)&v14);
  if ( HDRCaps >= 0 )
  {
    FinalMaxLuminanceValueFromRaw = DxgMonitor::EdidMonitorDescriptor::_GetFinalMaxLuminanceValueFromRaw(BYTE5(v14));
    v10 = HIBYTE(v14);
    *a3 = FinalMaxLuminanceValueFromRaw;
    FinalMinLuminanceValueFromRaw = DxgMonitor::EdidMonitorDescriptor::_GetFinalMinLuminanceValueFromRaw(
                                      v10,
                                      FinalMaxLuminanceValueFromRaw);
    v12 = BYTE6(v14);
    *a2 = FinalMinLuminanceValueFromRaw;
    *a4 = DxgMonitor::EdidMonitorDescriptor::_GetFinalMaxLuminanceValueFromRaw(v12);
  }
  if ( v15 )
    operator delete(v15);
  return (unsigned int)HDRCaps;
}
