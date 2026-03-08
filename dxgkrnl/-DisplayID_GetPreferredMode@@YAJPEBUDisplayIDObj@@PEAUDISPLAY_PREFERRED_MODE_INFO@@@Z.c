/*
 * XREFs of ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0072DA4
 * Callers:
 *     ?GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C03CC010 (-GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     ?DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEBU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z @ 0x1C0072B4C (-DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEBU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C0073690 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetPreferredMode(const struct DisplayIDObj *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  char v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int16 v8; // cx
  __int64 v9; // rax
  __int16 v10; // cx
  __int64 v11; // rax
  __int16 v12; // cx
  __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // rax
  struct _DISPLAYID_TYPE7_TIMING_BLOCK *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]
  struct _DISPLAYID_TYPE7_TIMING_BLOCK *v18; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v18 = 0LL;
  result = DisplayID_GetFirstType7Desc(a1, &v18);
  if ( (int)result >= 0 )
  {
    v16 = v18;
    v17 = *((_BYTE *)v18 + 2) / 0x14u;
    if ( !DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v16) )
      return 3221226021LL;
    v6 = v5 + 3;
    if ( !v4 )
      v6 = 0LL;
    if ( v6 )
    {
      v7 = v5 + 8;
      if ( !v4 )
        v7 = 5LL;
      v8 = *(unsigned __int8 *)v7;
      v9 = v5 + 7;
      v10 = v8 << 8;
      if ( !v4 )
        v9 = 4LL;
      *(_DWORD *)a2 = (unsigned __int16)(*(unsigned __int8 *)v9 + 1 + v10);
      v11 = v5 + 16;
      if ( !v4 )
        v11 = 13LL;
      v12 = *(unsigned __int8 *)v11;
      v13 = v5 + 15;
      v14 = v12 << 8;
      if ( !v4 )
        v13 = 12LL;
      *((_DWORD *)a2 + 1) = (unsigned __int16)(*(unsigned __int8 *)v13 + 1 + v14);
      v15 = v5 + 6;
      if ( !v4 )
        v15 = 3LL;
      *((_BYTE *)a2 + 8) = (*(_BYTE *)v15 & 0x10) != 0;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
