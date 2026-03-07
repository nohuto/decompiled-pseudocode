__int64 __fastcall UsbhBuildWmiConnectionNotification(__int64 a1, unsigned __int16 a2)
{
  int v2; // esi
  __int64 Pool2; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  __int16 v14; // [rsp+34h] [rbp-24h]

  v2 = a2;
  v13 = 0;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v12);
  }
  FdoExt(a1);
  Pool2 = ExAllocatePool2(64LL, 24LL, 1112885333LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = v2;
    v7 = UsbhSyncSendDeviceIoctl(a1, v5, &v13, 6u);
    Log(a1, 64, 1752067121, v6, v7);
    if ( v9 < 0 )
    {
      *(_DWORD *)(v6 + 20) = 0;
      v10 = 0LL;
    }
    else
    {
      *(_DWORD *)(v6 + 20) = v13;
      v10 = v13;
    }
    Log(a1, 64, 1752067122, v8, v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0x15u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v6);
  return v6;
}
