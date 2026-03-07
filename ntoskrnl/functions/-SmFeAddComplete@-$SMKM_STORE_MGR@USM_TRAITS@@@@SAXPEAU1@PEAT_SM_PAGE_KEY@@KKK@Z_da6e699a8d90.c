void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  int v7; // r14d
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct _KTHREAD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-C1h] BYREF
  int v18; // [rsp+30h] [rbp-B1h]
  _QWORD v19[3]; // [rsp+40h] [rbp-A1h] BYREF
  int v20; // [rsp+58h] [rbp-89h]
  int v21; // [rsp+5Ch] [rbp-85h]
  __int64 v22; // [rsp+60h] [rbp-81h]
  _BYTE v23[136]; // [rsp+68h] [rbp-79h] BYREF

  v5 = *a2;
  v18 = a3;
  memset(v23, 0, 0x80uLL);
  v19[1] = 0LL;
  v19[2] = 0LL;
  v22 = 0LL;
  v20 = 0;
  v7 = 0;
  v19[0] = v23;
  v21 = 8;
  v8 = 1;
  v17 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v10 = v17;
  while ( 1 )
  {
    if ( v8 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v5,
        (__int64)v19);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v11,
        (__int64)&v17,
        (__int64)v19);
      v10 = v17;
      v8 = 0;
    }
    if ( v10 )
    {
      v12 = *((_QWORD *)&v17 + 1) + 8LL;
      v13 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      *((_QWORD *)&v17 + 1) = v12;
      if ( v12 >= v10 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)&v17 = v14;
          *((_QWORD *)&v17 + 1) = v14 + 16;
        }
        v12 = (v14 + 16) & ((unsigned __int128)-(__int128)v14 >> 64);
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( (*(_BYTE *)(v12 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_15;
LABEL_14:
      *(_BYTE *)(v12 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v19, &v17);
      v10 = v17;
      v8 = 1;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(v12 + 6) == 1 )
    {
      if ( (a5 & 1) == 0 )
        goto LABEL_14;
      *(_BYTE *)(v12 + 6) = 3;
    }
LABEL_15:
    if ( ++v7 == v18 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
    v15 = KeGetCurrentThread();
    if ( v15->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
