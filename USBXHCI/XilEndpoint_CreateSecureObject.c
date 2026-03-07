__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1, int a2, int a3, int a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // [rsp+40h] [rbp-9h] BYREF
  __int64 v18; // [rsp+48h] [rbp-1h]
  _OWORD v19[2]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v20; // [rsp+70h] [rbp+27h]
  __int64 v21; // [rsp+80h] [rbp+37h]

  v17 = 0LL;
  LODWORD(v18) = 0;
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v7 = *(_QWORD *)(*v5 + 112LL);
  v20 = 0LL;
  LODWORD(v20) = 33;
  memset(v19, 0, sizeof(v19));
  v21 = 0LL;
  v8 = v5[2];
  if ( *(_BYTE *)(v8 + 657) )
  {
    v9 = *(_QWORD *)(v8 + 608);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    v9 = 0LL;
  }
  *((_QWORD *)&v20 + 1) = v9;
  LODWORD(v21) = *(_DWORD *)(a1[4] + 144LL);
  v10 = SecureChannel_SendRequestSynchronously(v7, v19, 56LL, &v17, 16);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v12 = v17;
    if ( (int)v17 >= 0 )
    {
      *a1 = v18;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v11,
          13,
          11,
          (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
          v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v11, 13, 10, (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids, v10);
  }
  return v12;
}
