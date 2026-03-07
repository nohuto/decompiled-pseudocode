__int64 __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  int v5; // edx
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // r14d
  __int64 Pool2; // rax
  int v11; // edx
  __int64 v12; // rsi
  unsigned int v13; // edi
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v26; // [rsp+60h] [rbp+8h] BYREF

  v26 = 0;
  v3 = *(_DWORD *)(a2 + 80);
  v5 = -1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v3 + 72 >= v3 )
    v5 = v3 + 72;
  v7 = 0;
  v8 = *(_QWORD *)(v6 + 112);
  if ( v3 + 72 >= v3 )
    v7 = v5;
  v9 = v7;
  Pool2 = ExAllocatePool2(64LL, v7, 1229146200LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(Pool2 + 32) = 19;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a2 + 24);
    v17 = *(_DWORD *)(a2 + 80);
    if ( v17 )
    {
      memmove((void *)(v12 + 72), *(const void **)(a2 + 72), v17);
      *(_DWORD *)(v12 + 68) = *(_DWORD *)(a2 + 80);
    }
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a2 + 84);
    v18 = *(_DWORD *)(a2 + 84);
    if ( v18 == 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 608LL);
    }
    else if ( v18 == 2 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1320LL);
    }
    else
    {
      if ( v18 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v11, 7, 20, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
LABEL_28:
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v22, v23, v24);
        }
LABEL_29:
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        goto LABEL_31;
      }
      v19 = 0LL;
    }
    *(_QWORD *)(v12 + 56) = v19;
    v20 = SecureChannel_SendRequestSynchronously(v8, v12, v9, &v26, 4);
    v13 = v20;
    if ( v20 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v21,
          7,
          21,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v20);
      }
      goto LABEL_31;
    }
    v13 = v26;
    if ( v26 >= 0 )
    {
LABEL_31:
      ExFreePoolWithTag((PVOID)v12, 0x49434858u);
      return v13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        v21,
        7,
        22,
        (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
        v26);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
    }
    goto LABEL_29;
  }
  v13 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v11, 7, 19, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return v13;
}
