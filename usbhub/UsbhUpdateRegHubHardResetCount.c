/*
 * XREFs of UsbhUpdateRegHubHardResetCount @ 0x1C0046F60
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0045000 (UsbhGetPdoRegistryParameter.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0046D44 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhUpdateRegHubHardResetCount(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h]
  ULONG v4; // [rsp+30h] [rbp-18h]
  int Data; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v4) = 1;
  v1 = (struct _DEVICE_OBJECT *)*((_QWORD *)FdoExt(a1) + 149);
  Data = 0;
  result = UsbhGetPdoRegistryParameter(v1, L"HardResetCount", &Data, 4u, 0LL, 0LL, v4);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741772 )
  {
    if ( Data != -1 )
      ++Data;
    return UsbhSetPdoRegistryParameter(v1, L"HardResetCount", 4u, &Data, 4u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v3) = result;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x5Cu,
               (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
               v3);
    }
  }
  return result;
}
