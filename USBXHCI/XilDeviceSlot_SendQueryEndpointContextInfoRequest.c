char __fastcall XilDeviceSlot_SendQueryEndpointContextInfoRequest(
        __int64 *a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int128 v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+50h] [rbp-11h]
  __int64 v18; // [rsp+58h] [rbp-9h]
  __int128 v19; // [rsp+60h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+Fh]
  __int128 v21; // [rsp+78h] [rbp+17h] BYREF

  v7 = *(_QWORD *)(a1[9] + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v20 = 0LL;
  v9 = *a1;
  v19 = 0LL;
  LODWORD(v20) = a3;
  v17 = 0LL;
  v18 = v9;
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(a2 + 608);
  v16 = 0LL;
  LODWORD(v19) = 29;
  v21 = 0LL;
  v10 = SecureChannel_SendRequestSynchronously(v8, &v16, 56LL, &v21, 16);
  if ( v10 >= 0 )
  {
    LOBYTE(v10) = v21;
    if ( (int)v21 >= 0 )
    {
      if ( a4 )
      {
        LOBYTE(v10) = BYTE4(v21);
        *a4 = DWORD1(v21);
      }
      if ( a5 )
      {
        LOBYTE(v10) = BYTE8(v21);
        *a5 = *((_QWORD *)&v21 + 1);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v7 + 72),
          v11,
          10,
          31,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v21);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
      }
      LOBYTE(v10) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v10 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    LOBYTE(v10) = WPP_RECORDER_SF_d(
                    *(_QWORD *)(v7 + 72),
                    v11,
                    10,
                    30,
                    (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
                    v10);
  }
  return v10;
}
