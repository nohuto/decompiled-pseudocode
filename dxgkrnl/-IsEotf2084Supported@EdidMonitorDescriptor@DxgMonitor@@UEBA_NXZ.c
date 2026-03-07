bool __fastcall DxgMonitor::EdidMonitorDescriptor::IsEotf2084Supported(DxgMonitor::EdidMonitorDescriptor *this)
{
  char v1; // di
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 *v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v4, &v3);
  v5 = 0LL;
  v1 = 0;
  if ( (int)EDID_V1_GetHDRCaps(v3, v4, (struct DISPLAY_HDR_CAPS *)&v5) >= 0 )
    v1 = BYTE2(v5);
  if ( v4 )
    operator delete(v4);
  return v1;
}
