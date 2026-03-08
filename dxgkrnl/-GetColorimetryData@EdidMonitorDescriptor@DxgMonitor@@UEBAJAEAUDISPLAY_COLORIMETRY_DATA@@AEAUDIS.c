/*
 * XREFs of ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0218370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C002388C (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0023908 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     Feature_45097502__private_IsEnabledDeviceUsage @ 0x1C0026D20 (Feature_45097502__private_IsEnabledDeviceUsage.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01CFB00 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetColorimetryData(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  struct DISPLAY_COLORIMETRY_DATA *v6; // r8
  unsigned __int8 *v7; // rbx
  int ColorimetryData; // edi
  unsigned __int8 *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)Feature_45097502__private_IsEnabledDeviceUsage() )
    *(_QWORD *)a2 = 0LL;
  v11 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v10, &v11);
  v6 = a2;
  v7 = v10;
  ColorimetryData = EDID_V1_GetColorimetryData(v11, v10, v6);
  if ( ColorimetryData >= 0
    || (unsigned int)Feature_45097502__private_IsEnabledDeviceUsage() && ColorimetryData == -1073741275 )
  {
    ColorimetryData = EDID_V1_GetColorDepths(v11, v7, a3);
  }
  if ( v7 )
    operator delete(v7);
  return (unsigned int)ColorimetryData;
}
