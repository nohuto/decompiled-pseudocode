__int64 __fastcall UsbhIoctlGetNodeConnectionInfoEx(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // r10d

  v2 = a2;
  v3 = a1;
  Log(a1, 32, 1768898104, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v4 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4 + 2,
      v4 + 47,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  }
  return UsbhIoctlGetNodeConnectionInfoExApi(v3, v2);
}
