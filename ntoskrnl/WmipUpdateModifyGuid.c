/*
 * XREFs of WmipUpdateModifyGuid @ 0x1407FB638
 * Callers:
 *     WmipUpdateDataSource @ 0x1407FB4E8 (WmipUpdateDataSource.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipFindISInDSByGuid @ 0x1407FB72C (WmipFindISInDSByGuid.c)
 *     WmipIsEqualInstanceSets @ 0x1407FB788 (WmipIsEqualInstanceSets.c)
 *     WmipBuildInstanceSet @ 0x140867C6C (WmipBuildInstanceSet.c)
 *     WmipAllocEntry @ 0x140868798 (WmipAllocEntry.c)
 *     WmipUpdateAddGuid @ 0x1409DED7C (WmipUpdateAddGuid.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipUpdateModifyGuid(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  unsigned int v9; // esi
  __int64 ISInDSByGuid; // rbx
  __int64 v11; // rax
  volatile signed __int64 *v12; // rdi
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // ebp
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-E8h]
  __int128 v22; // [rsp+40h] [rbp-D8h]
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int128 v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+70h] [rbp-A8h]
  PVOID v26[12]; // [rsp+90h] [rbp-88h] BYREF

  memset(v26, 0, sizeof(v26));
  v9 = 0;
  *a5 = 0LL;
  ISInDSByGuid = WmipFindISInDSByGuid(a1, a2);
  if ( ISInDSByGuid )
  {
    v11 = WmipAllocEntry(&WmipISChunkInfo);
    v12 = (volatile signed __int64 *)v11;
    if ( v11
      && (int)WmipBuildInstanceSet(a2, a3, a4, v11, *(_DWORD *)(a1 + 56)) >= 0
      && !(unsigned __int8)WmipIsEqualInstanceSets(ISInDSByGuid, v12) )
    {
      v21 = *(_OWORD *)ISInDSByGuid;
      v22 = *(_OWORD *)(ISInDSByGuid + 16);
      v23 = *(_OWORD *)(ISInDSByGuid + 32);
      v24 = *(_OWORD *)(ISInDSByGuid + 48);
      v25 = *(_OWORD *)(ISInDSByGuid + 64);
      v14 = *(_OWORD *)(ISInDSByGuid + 80);
      *(_QWORD *)(ISInDSByGuid + 88) = 0LL;
      v15 = *(_QWORD *)ISInDSByGuid;
      *(_OWORD *)&v26[10] = v14;
      if ( *(_QWORD *)(v15 + 8) != ISInDSByGuid )
        goto LABEL_20;
      v16 = *(_QWORD **)(ISInDSByGuid + 8);
      if ( *v16 != ISInDSByGuid )
        goto LABEL_20;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = WmipBuildInstanceSet(a2, a3, a4, ISInDSByGuid, *(_DWORD *)(a1 + 56));
      if ( v17 < 0 )
      {
        v18 = *(void **)(ISInDSByGuid + 88);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        *(_OWORD *)ISInDSByGuid = v21;
        *(_OWORD *)(ISInDSByGuid + 16) = v22;
        *(_OWORD *)(ISInDSByGuid + 32) = v23;
        *(_OWORD *)(ISInDSByGuid + 48) = v24;
        *(_OWORD *)(ISInDSByGuid + 64) = v25;
        *(_OWORD *)(ISInDSByGuid + 80) = v14;
      }
      v19 = *(_QWORD *)(ISInDSByGuid + 56) + 56LL;
      v20 = *(_QWORD *)v19;
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)ISInDSByGuid = v20;
      *(_QWORD *)(ISInDSByGuid + 8) = v19;
      *(_QWORD *)(v20 + 8) = ISInDSByGuid;
      *(_QWORD *)v19 = ISInDSByGuid;
      if ( v17 >= 0 )
      {
        if ( v26[11] )
          ExFreePoolWithTag(v26[11], 0);
        *a5 = ISInDSByGuid;
        v9 = 2;
      }
    }
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)ISInDSByGuid);
    if ( v12 )
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, v12);
  }
  else
  {
    return (unsigned int)WmipUpdateAddGuid(a1, a2, a3, a4, (__int64)a5);
  }
  return v9;
}
