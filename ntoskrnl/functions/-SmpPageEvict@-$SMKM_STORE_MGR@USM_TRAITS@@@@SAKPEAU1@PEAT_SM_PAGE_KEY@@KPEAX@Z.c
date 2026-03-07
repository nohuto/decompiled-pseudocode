__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, unsigned int *a2, int a3, __int64 a4)
{
  struct _MDL *v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  __int64 *v9; // rax
  int v10; // r12d
  __int64 v11; // r13
  __int64 *v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rax
  int v17; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+20h] BYREF
  int v19; // [rsp+ACh] [rbp+24h]

  v19 = HIDWORD(a4);
  v17 = a3;
  v18 = 0;
  v6 = 0LL;
  v7 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, (int)&v17, (int)&v18);
  v8 = v7;
  if ( v7 != 1024 )
  {
    v9 = (__int64 *)SmKmStoreRefFromStoreIndex(a1, v7 & 0x3FF);
    v10 = *(_DWORD *)(a1 + 1856) & 1;
    v11 = *v9;
    v12 = (__int64 *)SmFpAllocate((volatile LONG *)(a1 + 1424), 0, 0LL, 0LL, v10);
    v13 = v17;
    if ( v12 )
    {
      v12[1] = 0LL;
      *v12 = 0LL;
      v14 = SmFpAllocate((volatile LONG *)(a1 + 1424), 1, (__int64)v12, 0LL, v10);
      v6 = (struct _MDL *)v14;
      if ( v14 )
      {
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
        *(_DWORD *)v14 = 1;
        *(_DWORD *)(v14 + 8) = *a2;
        *(_DWORD *)(v14 + 12) = v17;
        *(_QWORD *)(v14 + 32) = v12;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v12, a1, v8, v14) >= 0 )
          return v18;
      }
      v13 = v17;
    }
    if ( v11 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(a1, a2, v13);
      v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v11 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v15 + 1);
    }
    if ( v6 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, v6, (__int64)v12);
    if ( v12 )
      SmFpFree(a1 + 1424, 0, (__int64)v12, (struct _MDL *)v12);
  }
  return v18;
}
