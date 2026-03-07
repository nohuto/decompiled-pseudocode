__int64 __fastcall WmipUpdateDataSource(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  unsigned int v4; // esi
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // r13d
  int v10; // r12d
  __int64 v11; // rbx
  int updated; // eax
  volatile signed __int64 *ISInDSByGuid; // rax
  volatile signed __int64 *v15; // r15
  PVOID *p_P; // rax
  int *v17; // r9
  int v18; // edx
  unsigned int *v19; // r8
  unsigned int v20; // r14d
  _QWORD *v21; // rdx
  char *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rbx
  PVOID v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  PVOID v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rcx
  PVOID v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned int v36; // [rsp+30h] [rbp-30h] BYREF
  int v37; // [rsp+34h] [rbp-2Ch] BYREF
  int v38; // [rsp+38h] [rbp-28h] BYREF
  int v39; // [rsp+3Ch] [rbp-24h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int64 *v41; // [rsp+48h] [rbp-18h] BYREF
  PVOID v42; // [rsp+50h] [rbp-10h] BYREF
  PVOID v43; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+40h] BYREF
  int v45; // [rsp+B0h] [rbp+50h]
  unsigned int v46; // [rsp+B8h] [rbp+58h] BYREF

  v45 = a3;
  v3 = *(volatile signed __int64 **)(a1 + 32);
  v4 = 0;
  v41 = 0LL;
  if ( !v3 )
    return 3221225524LL;
  WmipReferenceEntry((ULONG_PTR)v3);
  v6 = 0LL;
  v46 = 0;
  P = 0LL;
  v36 = 0;
  v44 = 0;
  v38 = 0;
  v7 = 0;
  v39 = 0;
  v8 = 0;
  v37 = 0;
  v9 = 0;
  v42 = 0LL;
  v43 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 16) )
    goto LABEL_9;
  v10 = v45;
  do
  {
    v11 = 32LL * v4 + a2 + 24;
    if ( (*(_DWORD *)(v11 + 16) & 0x10000) != 0 )
    {
      ISInDSByGuid = (volatile signed __int64 *)WmipFindISInDSByGuid(v3, v11);
      v15 = ISInDSByGuid;
      if ( !ISInDSByGuid )
        goto LABEL_7;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISInDSByGuid);
      p_P = &P;
      v41 = v15;
      v17 = &v37;
      v18 = (int)v15;
      v19 = &v44;
    }
    else
    {
      updated = WmipUpdateModifyGuid((_DWORD)v3, v11, a2, v10, (__int64)&v41);
      if ( updated == 1 )
      {
        p_P = &v43;
        v17 = &v38;
        v19 = &v46;
      }
      else
      {
        if ( updated != 2 )
          goto LABEL_7;
        p_P = &v42;
        v17 = &v39;
        v19 = &v36;
      }
      v18 = (int)v41;
    }
    WmipCachePtrs(v11, v18, (_DWORD)v19, (_DWORD)v17, (__int64)p_P);
LABEL_7:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 16) );
  v9 = v44;
  v7 = v46;
  v8 = v36;
  v6 = P;
LABEL_9:
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v3);
  if ( v9 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (_QWORD *)v6[2 * v20];
      v22 = (char *)&v6[2 * v20];
      v23 = *v21 - WmipBinaryMofGuid;
      if ( *v21 == WmipBinaryMofGuid )
        v23 = v21[1] - 0x102906C9A000F0B2LL;
      if ( !v23 )
        WmipGenerateBinaryMofNotification(*((_QWORD *)v22 + 1), &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
      v24 = *((_QWORD *)v22 + 1);
      v25 = P;
      WmipDisableCollectionForRemovedGuid(*((_QWORD *)P + 2 * v20), v24);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)v24 )
        WmipUnlinkInstanceSetFromGuidEntry(v24);
      if ( (*(_DWORD *)(v24 + 16) & 8) == 0 )
        WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, *(volatile signed __int64 **)(v24 + 56));
      *(_QWORD *)(v24 + 56) = 0LL;
      v26 = *(_QWORD *)(v24 + 40);
      if ( *(_QWORD *)(v26 + 8) != v24 + 40 || (v27 = *(_QWORD **)(v24 + 48), *v27 != v24 + 40) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v24);
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( ++v20 >= v9 )
        break;
      v6 = P;
    }
    WmipSendGuidUpdateNotifications(2LL, v9, v25);
    ExFreePoolWithTag(v25, 0);
  }
  if ( v8 )
  {
    v28 = v42;
    v29 = v42;
    v30 = v8;
    do
    {
      v31 = *(_QWORD *)*v29 - WmipBinaryMofGuid;
      if ( !v31 )
        v31 = *(_QWORD *)(*v29 + 8LL) - 0x102906C9A000F0B2LL;
      if ( !v31 )
        WmipGenerateBinaryMofNotification(v29[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      v29 += 2;
      --v30;
    }
    while ( v30 );
    WmipSendGuidUpdateNotifications(4LL, v8, v28);
    ExFreePoolWithTag(v28, 0);
  }
  if ( v7 )
  {
    v32 = v43;
    v33 = v43;
    v34 = v7;
    do
    {
      v35 = *(_QWORD *)*v33 - WmipBinaryMofGuid;
      if ( !v35 )
        v35 = *(_QWORD *)(*v33 + 8LL) - 0x102906C9A000F0B2LL;
      if ( !v35 )
        WmipGenerateBinaryMofNotification(v33[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      WmipEnableCollectionForNewGuid(*v33, v33[1]);
      v33 += 2;
      --v34;
    }
    while ( v34 );
    WmipSendGuidUpdateNotifications(1LL, v7, v32);
    ExFreePoolWithTag(v32, 0);
  }
  return 0LL;
}
