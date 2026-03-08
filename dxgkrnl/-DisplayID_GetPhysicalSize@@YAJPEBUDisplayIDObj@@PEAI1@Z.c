/*
 * XREFs of ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0072CD0
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072FCC (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 *     ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C03CBD50 (-GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayPa.c)
 *     ?GetPhysicalSize@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x1C03CC060 (-GetPhysicalSize@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z.c)
 * Callees:
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C0072A9C (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 */

__int64 __fastcall DisplayID_GetPhysicalSize(const struct DisplayIDObj *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 result; // rax
  _BYTE *v6; // r8
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  _BYTE *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = 0LL;
  result = DisplayID_GetBlock((__int64 *)a1, 33, &v11);
  if ( (int)result < 0 )
    return result;
  v6 = v11;
  if ( *v11 != 33 || v11[2] != 29 )
    return 3221225485LL;
  v7 = ((unsigned __int8)v11[4] << 8) + (unsigned __int8)v11[3] + 1;
  if ( (char)v11[1] >= 0 )
    v8 = 100 * v7;
  else
    v8 = 1000 * v7;
  *a2 = v8 / 0x3E8;
  v9 = (unsigned __int8)v6[5] + ((unsigned __int8)v6[6] << 8);
  if ( (char)v6[1] >= 0 )
    v10 = 100 * (v9 + 1);
  else
    v10 = 1000 * (v9 + 1);
  *a3 = v10 / 0x3E8;
  return 0LL;
}
