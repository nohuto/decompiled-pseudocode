__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src)
{
  __int64 v6; // rdi
  size_t v7; // rsi
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  void *v12; // rbp
  int v13; // edx
  int v14; // ebx
  const void *v15; // rdx
  int v16; // edx
  int v17; // r9d
  char v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v10 = v7 + 48, (int)v7 + 48 < (unsigned int)v7) )
    v10 = 0;
  Pool2 = ExAllocatePool2(64LL, v10, 1229146200LL);
  v12 = (void *)Pool2;
  if ( Pool2 )
  {
    v15 = Src;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_DWORD *)(Pool2 + 32) = 37;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 44) = a4;
    memmove((void *)(Pool2 + 48), v15, v7);
    v14 = SecureChannel_SendRequestSynchronously(v9, v12, v10, &v21, 4);
    if ( v14 >= 0 )
    {
      v14 = v21;
      if ( v21 >= 0 )
      {
        v14 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 20;
        v20 = *(_DWORD *)(v6 + 144);
        v19 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 19;
      v16 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      v20 = *(_DWORD *)(v6 + 144);
      v19 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL);
LABEL_11:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        v16,
        13,
        v17,
        (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
        v19,
        v20);
    }
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      v13,
      13,
      18,
      (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v10);
  }
  return (unsigned int)-1073741670;
}
