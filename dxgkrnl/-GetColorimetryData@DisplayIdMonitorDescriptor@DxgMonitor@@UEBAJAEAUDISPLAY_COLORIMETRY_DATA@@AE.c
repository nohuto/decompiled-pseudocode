/*
 * XREFs of ?GetColorimetryData@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C03CBEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00727B0 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetColorimetryData(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  int v6; // ecx
  char v7; // dl
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  v9 = 0;
  v8 = 0LL;
  result = DisplayID_GetColorimetryData(
             (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
             (struct DISPLAYID_COLORIMETRY_DATA *)&v10,
             (struct DISPLAY_COLOR_DEPTHS *)&v8);
  if ( (int)result >= 0 )
  {
    v6 = v9;
    *(_OWORD *)a3 = v8;
    *((_DWORD *)a3 + 4) = v6;
    LOBYTE(v6) = v10;
    v7 = v10;
    *((_BYTE *)a2 + 5) = 0;
    LOBYTE(v6) = (v6 & 0x40) != 0;
    *((_BYTE *)a2 + 4) = (v7 & 8) != 0;
    *(_WORD *)((char *)a2 + 1) = 0;
    *((_BYTE *)a2 + 7) = v6;
    *((_BYTE *)a2 + 6) = v6;
    *((_BYTE *)a2 + 3) = 0;
    *(_BYTE *)a2 = 0;
  }
  return result;
}
