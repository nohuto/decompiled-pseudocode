__int64 __fastcall XilDeviceSlot_CreateSecureObject(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+48h] [rbp+7h] BYREF
  __int64 v12; // [rsp+50h] [rbp+Fh]
  __int64 v13; // [rsp+58h] [rbp+17h] BYREF
  __int128 v14; // [rsp+60h] [rbp+1Fh]
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+7Ch] [rbp+3Bh]
  __int64 v18; // [rsp+80h] [rbp+3Fh]

  v11 = 0LL;
  LODWORD(v12) = 0;
  v2 = *(_QWORD **)(a1[9] + 8LL);
  v3 = v2[14];
  v13 = 0LL;
  v17 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v16 = 21;
  v18 = v2[77];
  v4 = SecureChannel_SendRequestSynchronously(v3, &v13, 48LL, &v11, 16);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = v11;
    if ( (int)v11 >= 0 )
    {
      *a1 = v12;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(v2[9], v5, 10, 11, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(v2[9], v5, 10, 10, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v4);
  }
  return v6;
}
