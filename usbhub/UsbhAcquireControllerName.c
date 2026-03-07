__int64 __fastcall UsbhAcquireControllerName(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  unsigned int v14; // r8d
  int ControllerName; // eax
  int v16; // r10d
  int v18; // [rsp+28h] [rbp-30h]

  v6 = a3;
  v7 = (unsigned int)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = a2;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xDu,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v18,
      a3);
  }
  Log(a1, 64, 1094929969, a5, v7);
  Log(a1, 64, 1094929970, v9, v6);
  *a4 = 0;
  if ( (unsigned int)v6 < 0xA )
    return 3221225507LL;
  v11 = (unsigned int *)(v10 + 4);
  v12 = *(_DWORD *)(v10 + 4);
  if ( v12 < 0xA )
    return 3221225507LL;
  v13 = v10 + 4;
  if ( v12 > (unsigned int)v6 )
    v12 = v6;
  Log(a1, 64, 1094929971, v13, v12);
  v14 = *v11 - 4;
  *v11 = v14;
  if ( v14 > (int)v6 - 4 )
    return 3221225507LL;
  ControllerName = UsbhGetControllerName(a1, v11, v14);
  Log(a1, 64, 1094929972, (__int64)v11, ControllerName);
  if ( v16 >= 0 )
  {
    *v11 += 4;
    *a4 = v12;
  }
  return (unsigned int)v16;
}
