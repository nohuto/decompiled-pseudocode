/*
 * XREFs of ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0072ED8
 * Callers:
 *     ?GetSupportedModes@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z @ 0x1C03CC100 (-GetSupportedModes@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z @ 0x1C0072BE4 (-DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z.c)
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072FCC (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 */

__int64 __fastcall DisplayID_GetSupportedModes(
        const struct DisplayIDObj *a1,
        unsigned int *a2,
        unsigned int *a3,
        struct _VideoModeDescriptor *a4)
{
  __int64 result; // rax
  unsigned __int16 v9; // cx
  unsigned __int16 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v11[6]; // [rsp+34h] [rbp-Ch] BYREF
  unsigned __int16 v12; // [rsp+60h] [rbp+20h] BYREF

  if ( !a1 || !*((_DWORD *)a1 + 5) || !a2 || (!a4 || !a3) && *a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v12 = 0;
  v10[0] = 0;
  DisplayID_GetNumberOfTimingDescriptors(a1, &v12, v10);
  v9 = 2 * v12;
  if ( *a2 && *a2 >= v9 )
  {
    v12 *= 2;
    v11[0] = 0;
    result = DisplayID_GetVideoModeDescriptors(a1, &v12, a4, v11, v10[0]);
    *a2 = v12;
    *a3 = v11[0];
  }
  else
  {
    *a2 = v9;
    return 3221225507LL;
  }
  return result;
}
