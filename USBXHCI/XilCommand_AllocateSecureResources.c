__int64 __fastcall XilCommand_AllocateSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edi
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+48h] [rbp+7h] BYREF
  __int128 v13; // [rsp+50h] [rbp+Fh]
  __int64 v14; // [rsp+60h] [rbp+1Fh]
  int v15; // [rsp+68h] [rbp+27h]
  int v16; // [rsp+6Ch] [rbp+2Bh]
  __int128 v17; // [rsp+70h] [rbp+2Fh] BYREF
  __int128 v18; // [rsp+80h] [rbp+3Fh]

  DWORD1(v17) = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v2 + 112);
  v12 = 0LL;
  v16 = 0;
  v13 = 0LL;
  v14 = v3;
  v17 = 0LL;
  v15 = 13;
  v18 = 0LL;
  v5 = SecureChannel_SendRequestSynchronously(v4, &v12, 40LL, &v17, 32);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = v17;
    if ( (int)v17 >= 0 )
    {
      *(_QWORD *)(a1 + 40) = *((_QWORD *)&v17 + 1);
      *(_QWORD *)(a1 + 48) = v18;
      *(_DWORD *)(a1 + 56) = DWORD2(v18);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v6,
          7,
          14,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v6, 7, 13, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids, v5);
  }
  return v7;
}
