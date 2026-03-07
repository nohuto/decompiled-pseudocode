__int64 __fastcall XilUsbDevice_CreateSecureObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v5; // r14
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edi
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int128 v16; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+50h] [rbp-29h]
  _QWORD v18[10]; // [rsp+60h] [rbp-19h] BYREF

  v17 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v16 = 0LL;
  v5 = *(_QWORD **)(v3 + 8);
  v6 = v5[14];
  memset(v18, 0, sizeof(v18));
  v7 = *(_OWORD *)(a2 + 4);
  LODWORD(v18[4]) = 30;
  v8 = *(_QWORD *)(a2 + 20);
  v18[5] = v5[77];
  LODWORD(v18[6]) = *(_DWORD *)a2;
  *(_OWORD *)((char *)&v18[6] + 4) = v7;
  *(_QWORD *)((char *)&v18[8] + 4) = v8;
  v9 = SecureChannel_SendRequestSynchronously(v6, v18, 80LL, &v16, 24);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v11 = v16;
    if ( (int)v16 >= 0 )
    {
      *(_QWORD *)a1 = *((_QWORD *)&v16 + 1);
      *(_BYTE *)(a1 + 48) = v17;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(v5[9], v10, 12, 11, (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids, v16);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(v5[9], v10, 12, 10, (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids, v9);
  }
  return v11;
}
