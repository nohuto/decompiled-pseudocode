__int64 __fastcall UsbhWmiInsufficentPower(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 PortData; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]

  v6 = a3;
  v8 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xEu,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v12,
      a3);
  }
  Log(a1, 64, 1835365425, a5, v6);
  *a4 = 0;
  if ( (unsigned int)v6 >= 0x18 )
  {
    PortData = UsbhGetPortData(a1, *(_WORD *)(a5 + 4));
    if ( PortData )
    {
      v8 = 0;
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(PortData + 432);
      *a4 = 24;
    }
  }
  else
  {
    v8 = -1073741789;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v11);
  }
  return v8;
}
