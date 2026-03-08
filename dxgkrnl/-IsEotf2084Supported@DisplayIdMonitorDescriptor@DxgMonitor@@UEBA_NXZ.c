/*
 * XREFs of ?IsEotf2084Supported@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C03CC150
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00727B0 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 */

bool __fastcall DxgMonitor::DisplayIdMonitorDescriptor::IsEotf2084Supported(
        DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp-18h]
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v3 = 0;
  v2 = 0LL;
  return (int)DisplayID_GetColorimetryData(
                (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                (struct DISPLAYID_COLORIMETRY_DATA *)&v4,
                (struct DISPLAY_COLOR_DEPTHS *)&v2) >= 0
      && (v4 & 0x40) != 0;
}
