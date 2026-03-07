void __fastcall UsbhInitPortPindicator(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // [rsp+28h] [rbp-10h]

  Log(a1, 0x8000, 1768834636, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids,
      v6);
  }
  Log(a1, 0x2000, 1768843604, a2 + 2744, (__int64)UsbhPindicatorTimer);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = 1332899156LL;
  *(_QWORD *)(v4 + 48) = v5;
  *(_DWORD *)(v4 + 72) = 1349086820;
  *(_DWORD *)(a2 + 2824) = 4;
  *(_DWORD *)(a2 + 2832) = 500;
}
