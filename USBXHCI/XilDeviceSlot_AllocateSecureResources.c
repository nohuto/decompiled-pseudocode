__int64 __fastcall XilDeviceSlot_AllocateSecureResources(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a1[9] + 8);
  v3 = *a1;
  v4 = *(_QWORD *)(v2 + 112);
  v13 = 0LL;
  v17 = 0;
  v12 = 0LL;
  v14 = 0LL;
  v15 = v3;
  v16 = 22;
  v5 = SecureChannel_SendRequestSynchronously(v4, &v13, 40LL, &v12, 8);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = v12;
    if ( (int)v12 >= 0 )
    {
      *((_DWORD *)a1 + 20) = HIDWORD(v12);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v6,
          10,
          14,
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
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v6, 10, 13, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v5);
  }
  return v7;
}
