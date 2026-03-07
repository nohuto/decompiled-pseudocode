__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  int v11; // edx
  int v12; // edi
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 i; // r9
  int v16; // eax
  __int64 Pool2; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v21; // r9d
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_QWORD *)(v3 + 120);
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v6 = CommonBuffer_AcquireBuffer((struct _KEVENT *)v4, 4096, a1, 829713491);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v21 = 13;
LABEL_23:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v7,
      10,
      v21,
      (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids);
    goto LABEL_24;
  }
  v8 = *(_DWORD *)(v5 + 96);
  *(_DWORD *)(a1 + 20) = v8;
  if ( !v8 )
    goto LABEL_10;
  v9 = CommonBuffer_AcquireBuffer((struct _KEVENT *)v4, 8 * v8, a1, 846490707);
  *(_QWORD *)(a1 + 32) = v9;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v21 = 14;
    goto LABEL_23;
  }
  v10 = *(_DWORD *)(a1 + 20);
  v22 = 0;
  v12 = XilCoreCommonBuffer_AcquireBuffers((__int64 **)(v4 + 88), v10, 0x1000u, (int)v1, a1, 863267923, &v22);
  if ( v22 )
    CommonBuffer_QueueWorkItem((struct _KEVENT *)v4);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v11,
        10,
        15,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
        v12);
    }
    goto LABEL_25;
  }
  v13 = 0LL;
  v14 = (_QWORD *)*v1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL); (unsigned int)v13 < *(_DWORD *)(a1 + 20); v14 = (_QWORD *)*v14 )
  {
    *(_QWORD *)(i + 8 * v13) = v14[3];
    v13 = (unsigned int)(v13 + 1);
  }
  **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
LABEL_10:
  v16 = (unsigned __int8)*(_DWORD *)(v5 + 84);
  *(_DWORD *)(a1 + 16) = v16;
  Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(v16 + 1), 1229146200LL);
  *(_QWORD *)(a1 + 56) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 16;
      goto LABEL_23;
    }
LABEL_24:
    v12 = -1073741670;
LABEL_25:
    XilCoreDeviceSlot_FreeResources(a1);
    return (unsigned int)v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(v18 + 16);
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
      v18,
      10,
      17,
      (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
      v19);
  }
  return 0;
}
