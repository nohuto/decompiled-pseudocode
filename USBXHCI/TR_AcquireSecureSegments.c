__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  int *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v9; // r13d
  __int64 Pool2; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  int v20; // ebx
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  __int64 j; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  _QWORD *v32; // [rsp+40h] [rbp-29h] BYREF
  _QWORD **v33; // [rsp+48h] [rbp-21h]
  __int64 i; // [rsp+50h] [rbp-19h]
  __int128 v35; // [rsp+58h] [rbp-11h] BYREF
  __int128 v36; // [rsp+68h] [rbp-1h]
  __int128 v37; // [rsp+78h] [rbp+Fh]

  v33 = &v32;
  v3 = 0LL;
  v4 = 0;
  v32 = &v32;
  v6 = *(_QWORD *)(a1 + 40);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  for ( i = *(_QWORD *)(v6 + 120); v4 < a2; v33 = (_QWORD **)v11 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(v9 + 88), 1229146200LL);
    v11 = (_QWORD *)Pool2;
    if ( !Pool2 )
      goto LABEL_15;
    *(_DWORD *)(Pool2 + 40) = v9 + 88;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 88;
    *(_DWORD *)(Pool2 + 44) = v9;
    *(_DWORD *)(Pool2 + 64) = 828862034;
    *(_QWORD *)(Pool2 + 72) = a1;
    *(_DWORD *)(Pool2 + 80) = 2;
    v12 = v33;
    if ( *v33 != &v32 )
LABEL_38:
      __fastfail(3u);
    v11[1] = v33;
    *v11 = &v32;
    ++v4;
    *v12 = v11;
  }
  v13 = -1;
  v14 = 8 * a2 + 8;
  if ( v14 >= 8 * a2 )
    v13 = 8 * a2 + 8;
  v15 = 0;
  if ( v14 >= 8 * a2 )
    v15 = v13;
  v16 = v15;
  v3 = (int *)ExAllocatePool2(64LL, v15, 1229146200LL);
  if ( !v3 )
  {
LABEL_15:
    v20 = -1073741670;
    goto LABEL_16;
  }
  v17 = *(_QWORD *)(a1 + 288);
  v37 = 0LL;
  LODWORD(v37) = 40;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = v17;
  v18 = *(_QWORD *)(a1 + 40);
  v35 = 0LL;
  DWORD2(v37) = a2;
  v20 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v18 + 112), &v35, 48LL, v3, v16);
  if ( v20 >= 0 )
  {
    v20 = *v3;
    if ( *v3 >= 0 )
    {
      if ( v3[1] == a2 )
      {
        v28 = v32;
        v29 = 0LL;
        while ( &v32 != v28 )
        {
          v30 = *(_QWORD *)&v3[2 * v29 + 2];
          v29 = (unsigned int)(v29 + 1);
          v28[3] = v30;
          v28 = (_QWORD *)*v28;
        }
        if ( (_DWORD)v29 != a2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v28, v29, v21);
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        if ( v32 != &v32 )
        {
          **(_QWORD **)(a3 + 8) = v32;
          v32[1] = *(_QWORD *)(a3 + 8);
          *v33 = (_QWORD *)a3;
          *(_QWORD *)(a3 + 8) = v33;
          v33 = &v32;
          v32 = &v32;
        }
        v20 = 0;
LABEL_40:
        ExFreePoolWithTag(v3, 0x49434858u);
        return (unsigned int)v20;
      }
      v20 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v19,
        14,
        23,
        (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
    }
    else if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
           || (LOBYTE(v19) = 2,
               WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
                 v19,
                 14,
                 22,
                 (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
                 *v3),
               WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED) )
    {
LABEL_25:
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      goto LABEL_16;
    }
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v22, v23, v24);
    goto LABEL_25;
  }
LABEL_16:
  for ( j = i; ; CommonBuffer_ReleaseBuffer(j, v26) )
  {
    v26 = (__int64)v32;
    if ( v32 == &v32 )
      break;
    if ( (_QWORD **)v32[1] != &v32 )
      goto LABEL_38;
    v27 = *v32;
    if ( *(_QWORD **)(*v32 + 8LL) != v32 )
      goto LABEL_38;
    v32 = (_QWORD *)*v32;
    *(_QWORD *)(v27 + 8) = &v32;
  }
  if ( v3 )
    goto LABEL_40;
  return (unsigned int)v20;
}
