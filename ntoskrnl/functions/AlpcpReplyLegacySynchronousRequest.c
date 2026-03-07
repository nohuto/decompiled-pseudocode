__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // r9d
  ULONG_PTR v8; // rsi
  unsigned int *v9; // r12
  int v10; // edx
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // r13
  _QWORD *v14; // rbx
  signed __int64 *v15; // rsi
  bool v16; // bl
  _QWORD *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rbx
  __int64 v22; // r15
  ULONG_PTR v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  signed __int32 v28[10]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-90h]
  unsigned int v30; // [rsp+30h] [rbp-88h]
  __int128 v31; // [rsp+38h] [rbp-80h] BYREF
  __int128 v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+58h] [rbp-60h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  ULONG_PTR v36; // [rsp+70h] [rbp-48h]
  __int64 *v37; // [rsp+78h] [rbp-40h]
  ULONG_PTR v39; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)a1;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v39 = 0LL;
  v35 = v4;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, (__int64)&v31, 0);
    LOBYTE(v5) = 1;
    v6 = AlpcpValidateMessage(&v31, v5);
    v30 = v6;
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( WORD3(v31) )
    {
      v6 = AlpcpValidateDataInformation(v3, &v31);
      v30 = v6;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v31 = *(_OWORD *)a2;
    v32 = *(_OWORD *)(a2 + 16);
    HIDWORD(v33) = HIDWORD(*(_QWORD *)(a2 + 32));
    LODWORD(v33) = 0;
    LOBYTE(a2) = 1;
    v6 = AlpcpValidateMessage(&v31, a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v6 = AlpcpLookupMessage(v4, DWORD2(v32), v33, v7, (__int64)&v39);
  v30 = v6;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v8 = v39;
  v9 = (unsigned int *)(v39 + 40);
  v36 = v39 + 40;
  v10 = *(_DWORD *)(v39 + 40);
  if ( (v10 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v4, v39, 0x10000);
    return (unsigned int)-1073741769;
  }
  if ( (v10 & 0x200) != 0 )
    goto LABEL_27;
  v37 = (__int64 *)(v39 + 32);
  if ( !*(_QWORD *)(v39 + 32) )
    goto LABEL_27;
  v11 = *(_QWORD *)(v39 + 16);
  if ( v11 == v4 )
  {
    v12 = v10 & 7;
  }
  else
  {
    v12 = v10 & 7;
    if ( (v10 & 7) == 0 )
    {
      v13 = *(_QWORD *)(v39 + 24);
      if ( v13 )
      {
        v14 = *(_QWORD **)(v13 + 16);
        v15 = v14 - 2;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v14 - 2), 0LL);
        if ( ((*(_DWORD *)(v13 + 416) >> 1) & 3) == 2 )
          v16 = *v14 == v4 || v14[1] == v4;
        else
          v16 = v14[2] == v4;
        if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v15);
        KeAbPostRelease((ULONG_PTR)v15);
        v8 = v39;
        goto LABEL_33;
      }
LABEL_27:
      AlpcpUnlockMessage(v8);
      return (unsigned int)-1073741790;
    }
    if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
      goto LABEL_27;
    v17 = *(_QWORD **)(v4 + 16);
    if ( !v17 || *v17 != v11 )
      goto LABEL_27;
  }
  if ( v12 != 3 || (v10 & 0x2000) != 0 )
    goto LABEL_27;
  v16 = 1;
LABEL_33:
  if ( !v16 )
    goto LABEL_27;
  v19 = *(_QWORD *)(v8 + 96);
  if ( v19 )
    v20 = *(_QWORD *)(v19 + 32) - 40LL;
  else
    v20 = 512LL;
  v34 = v20;
  if ( (__int16)v31 > v20 )
  {
    v6 = AlpcpCaptureMessageData(v8, (__int16)v31, v3 + 40);
    v30 = v6;
  }
  else
  {
    memmove((void *)(v8 + 280), (const void *)(v3 + 40), (__int16)v31);
    v6 = 0;
    v30 = 0;
  }
  if ( v6 >= 0 )
  {
    *v9 |= 0x10000u;
    _InterlockedOr(v28, 0);
    v21 = v39;
    v22 = *(_QWORD *)(v39 + 24);
    AlpcpRemoveMessageFromPendingQueue(v39);
    *(_DWORD *)(v21 + 240) = v31;
    *(_WORD *)(v21 + 244) = 2;
    v23 = v39;
    *(_OWORD *)(v39 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *v9 |= 0x200u;
    v24 = *v9 & 0xFFFFFF87 | (4 * (*(_DWORD *)(v22 + 416) & 6));
    *v9 = v24;
    if ( ((v24 >> 3) & 0xF) == 1 )
    {
      v25 = *(_QWORD *)(v22 + 16);
      ExAcquirePushLockSharedEx(v25 - 16, 0LL);
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
        *(_QWORD *)(v23 + 120) = *(_QWORD *)(v26 + 56);
      else
        *(_QWORD *)(v23 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v25 - 16));
      KeAbPostRelease(v25 - 16);
      v23 = v39;
    }
    else
    {
      *(_QWORD *)(v23 + 120) = *(_QWORD *)(v22 + 56);
    }
    v27 = *v37;
    *v37 = 0LL;
    --*(_WORD *)(v23 - 30);
    *v9 |= 0x100u;
    *v9 = *v9 & 0xFFFEFFF8 | 5;
    AlpcpClearOwnerPortMessage(v23);
    AlpcpSetOwnerPortMessage(v23, v4);
    AlpcpUnlockMessage(v23);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 24) = v27;
    }
    else
    {
      v29 = 0LL;
      v28[8] = 0;
      KeReleaseSemaphoreEx(v27 + 1240, 1u, 1);
    }
    return v30;
  }
  else
  {
    AlpcpUnlockMessage(v8);
  }
  return (unsigned int)v6;
}
