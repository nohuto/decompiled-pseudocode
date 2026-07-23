/*
 * XREFs of WmipUpdateDataSource @ 0x1407C44E8
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x1407570F8 (WmipProcessWmiRegInfo.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1406339F4 (WmipReferenceEntry.c)
 *     WmipCachePtrs @ 0x140757BC0 (WmipCachePtrs.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757C8C (WmipEnableCollectionForNewGuid.c)
 *     WmipSendGuidUpdateNotifications @ 0x140757DDC (WmipSendGuidUpdateNotifications.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407582D4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x14076CF0C (WmipUnlinkInstanceSetFromGuidEntry.c)
 *     WmipUpdateModifyGuid @ 0x1407C4640 (WmipUpdateModifyGuid.c)
 *     WmipFindISInDSByGuid @ 0x1407C47A0 (WmipFindISInDSByGuid.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407D12DC (WmipGenerateBinaryMofNotification.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipUpdateDataSource(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  unsigned int v4; // esi
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  _OWORD **v9; // r14
  int v10; // r12d
  __int64 v11; // rbx
  int updated; // eax
  volatile signed __int64 *ISInDSByGuid; // rax
  volatile signed __int64 *v15; // r14
  unsigned int v16; // edi
  const void **p_P; // rax
  int *v18; // r9
  __int64 v19; // rdx
  unsigned int *v20; // r8
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _OWORD **v26; // rsi
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  _OWORD **v30; // rsi
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  _QWORD *v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch] BYREF
  int v37; // [rsp+38h] [rbp-28h] BYREF
  int v38; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID v41; // [rsp+50h] [rbp-10h] BYREF
  _OWORD **v42; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+40h] BYREF
  int v44; // [rsp+B0h] [rbp+50h]
  unsigned int v45; // [rsp+B8h] [rbp+58h] BYREF

  v44 = a3;
  v3 = *(volatile signed __int64 **)(a1 + 32);
  v4 = 0;
  v39 = 0LL;
  if ( !v3 )
    return 3221225524LL;
  WmipReferenceEntry((ULONG_PTR)v3);
  v6 = 0;
  v45 = 0;
  v43 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v7 = 0;
  v36 = 0;
  v8 = 0;
  P = 0LL;
  v41 = 0LL;
  v9 = 0LL;
  v42 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 16) )
    goto LABEL_9;
  v10 = v44;
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
      p_P = (const void **)&v42;
      v39 = (__int64)v15;
      v18 = &v36;
      v19 = (__int64)v15;
      v20 = &v43;
    }
    else
    {
      updated = WmipUpdateModifyGuid((_DWORD)v3, v11, a2, v10, (__int64)&v39);
      if ( updated == 1 )
      {
        p_P = (const void **)&v41;
        v18 = &v37;
        v20 = &v45;
      }
      else
      {
        if ( updated != 2 )
          goto LABEL_7;
        p_P = (const void **)&P;
        v18 = &v38;
        v20 = &v35;
      }
      v19 = v39;
    }
    WmipCachePtrs(v11, v19, v20, v18, p_P);
LABEL_7:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 16) );
  v9 = v42;
  v7 = v45;
  v8 = v35;
  v6 = v43;
LABEL_9:
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v3);
  if ( v6 )
  {
    v16 = 0;
    do
    {
      v21 = v9[2 * v16];
      v22 = *v21 - WmipBinaryMofGuid;
      if ( *v21 == WmipBinaryMofGuid )
        v22 = v21[1] - 0x102906C9A000F0B2LL;
      if ( !v22 )
      {
        WmipGenerateBinaryMofNotification(v9[2 * v16 + 1], &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
        v21 = v9[2 * v16];
      }
      v23 = (__int64)v9[2 * v16 + 1];
      WmipDisableCollectionForRemovedGuid(v21, v23);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)v23 )
        WmipUnlinkInstanceSetFromGuidEntry((__int64 *)v23);
      if ( (*(_DWORD *)(v23 + 16) & 8) == 0 )
        WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, *(volatile signed __int64 **)(v23 + 56));
      *(_QWORD *)(v23 + 56) = 0LL;
      v24 = *(_QWORD *)(v23 + 40);
      if ( *(_QWORD *)(v24 + 8) != v23 + 40 || (v25 = *(_QWORD **)(v23 + 48), *v25 != v23 + 40) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v23);
      KeReleaseMutex(&WmipSMMutex, 0);
      ++v16;
    }
    while ( v16 < v43 );
    WmipSendGuidUpdateNotifications(2, v43, v9);
    ExFreePoolWithTag(v9, 0);
  }
  if ( v8 )
  {
    v26 = (_OWORD **)P;
    v27 = P;
    v28 = v8;
    do
    {
      v29 = *(_QWORD *)*v27 - WmipBinaryMofGuid;
      if ( !v29 )
        v29 = *(_QWORD *)(*v27 + 8LL) - 0x102906C9A000F0B2LL;
      if ( !v29 )
        WmipGenerateBinaryMofNotification(v27[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      v27 += 2;
      --v28;
    }
    while ( v28 );
    WmipSendGuidUpdateNotifications(4, v8, v26);
    ExFreePoolWithTag(v26, 0);
  }
  if ( v7 )
  {
    v30 = (_OWORD **)v41;
    v31 = v41;
    v32 = v7;
    do
    {
      v33 = (_QWORD *)*v31;
      v34 = *(_QWORD *)*v31 - WmipBinaryMofGuid;
      if ( !v34 )
        v34 = v33[1] - 0x102906C9A000F0B2LL;
      if ( !v34 )
      {
        WmipGenerateBinaryMofNotification(v31[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
        v33 = (_QWORD *)*v31;
      }
      WmipEnableCollectionForNewGuid(v33, v31[1]);
      v31 += 2;
      --v32;
    }
    while ( v32 );
    WmipSendGuidUpdateNotifications(1, v7, v30);
    ExFreePoolWithTag(v30, 0);
  }
  return 0LL;
}
