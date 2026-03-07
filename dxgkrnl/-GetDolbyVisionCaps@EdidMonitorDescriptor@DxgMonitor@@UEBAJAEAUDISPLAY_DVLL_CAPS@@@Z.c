__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  struct DISPLAY_DVLL_CAPS *v3; // r8
  unsigned __int8 *v4; // rbx
  unsigned int DolbyVisionCaps; // edi
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int8 *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v8, &v7);
  v3 = a2;
  v4 = v8;
  DolbyVisionCaps = EDID_V1_GetDolbyVisionCaps(v7, v8, v3);
  if ( v4 )
    operator delete(v4);
  return DolbyVisionCaps;
}
