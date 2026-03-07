__int64 __fastcall XilDeviceSlot_InitializeSecureResources(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  unsigned int v5; // edi
  void *v6; // rdx
  void *v7; // rdx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(a1[9] + 8);
  v2 = *a1;
  v3 = *(_QWORD *)(v1 + 112);
  v13 = 0LL;
  v17 = 0;
  v12 = 0;
  v14 = 0LL;
  v15 = v2;
  v16 = 24;
  v4 = SecureChannel_SendRequestSynchronously(v3, &v13, 40LL, &v12, 4);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = &WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids;
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          (_DWORD)v7,
          10,
          20,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = &WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids;
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 72),
      (_DWORD)v6,
      10,
      19,
      (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
      v4);
  }
  return v5;
}
