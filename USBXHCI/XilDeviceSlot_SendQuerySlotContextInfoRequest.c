char __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r10
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+40h] [rbp-19h] BYREF
  __int128 v15; // [rsp+48h] [rbp-11h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  int v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+64h] [rbp+Bh]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  __int64 v20; // [rsp+70h] [rbp+17h] BYREF
  int v21; // [rsp+78h] [rbp+1Fh]

  v6 = *(_QWORD *)(a1[9] + 8);
  v7 = *(_QWORD *)(v6 + 112);
  v14 = 0LL;
  v18 = 0;
  v20 = 0LL;
  v21 = 0;
  v16 = *a1;
  v19 = *(_QWORD *)(a2 + 608);
  v15 = 0LL;
  v17 = 28;
  v8 = SecureChannel_SendRequestSynchronously(v7, &v14, 48LL, &v20, 12);
  if ( v8 >= 0 )
  {
    LOBYTE(v8) = v20;
    if ( (int)v20 >= 0 )
    {
      if ( a3 )
      {
        LOBYTE(v8) = BYTE4(v20);
        *a3 = HIDWORD(v20);
      }
      if ( a4 )
      {
        LOBYTE(v8) = v21;
        *a4 = v21;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v9,
          10,
          29,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v20);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12);
      }
      LOBYTE(v8) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v8 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    LOBYTE(v8) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v6 + 72),
                   v9,
                   10,
                   28,
                   (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
                   v8);
  }
  return v8;
}
