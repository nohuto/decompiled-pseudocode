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
