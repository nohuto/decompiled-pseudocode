char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // edi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  struct _KTHREAD *v14; // rax
  __int128 v17; // [rsp+20h] [rbp-A9h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-99h] BYREF
  int v19; // [rsp+48h] [rbp-81h]
  int v20; // [rsp+4Ch] [rbp-7Dh]
  __int64 v21; // [rsp+50h] [rbp-79h]
  _BYTE v22[136]; // [rsp+58h] [rbp-71h] BYREF

  v3 = *a2;
  memset(v22, 0, 0x80uLL);
  v20 = 8;
  v18[1] = 0LL;
  v18[2] = 0LL;
  v21 = 0LL;
  v19 = 0;
  v6 = 1;
  v18[0] = v22;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v17 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v9 = v17;
  while ( 1 )
  {
    if ( v6 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v3,
        (__int64)v18);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v10,
        (__int64)&v17,
        (__int64)v18);
      v9 = v17;
      v6 = 0;
    }
    if ( v9 )
    {
      v11 = *((_QWORD *)&v17 + 1) + 8LL;
      v12 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
      *((_QWORD *)&v17 + 1) = v11;
      if ( v11 >= v9 + 8 * v12 )
      {
        v13 = *(_QWORD *)(v9 + 8);
        if ( v13 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          *(_QWORD *)&v17 = v13;
          *((_QWORD *)&v17 + 1) = v13 + 16;
        }
        v11 = (v13 + 16) & ((unsigned __int128)-(__int128)v13 >> 64);
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( *(_BYTE *)(v11 + 6) == 3 )
    {
      *(_BYTE *)(v11 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v18, (__int64 *)&v17);
      v9 = v17;
      v6 = 1;
    }
    if ( ++v8 == a3 )
      break;
    ++v3;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  v14 = KeGetCurrentThread();
  if ( v14->SpecialApcDisable++ == -1 )
  {
    v14 = (struct _KTHREAD *)((char *)v14 + 152);
    if ( *(struct _KTHREAD **)&v14->Header.Lock != v14 )
      LOBYTE(v14) = KiCheckForKernelApcDelivery();
  }
  return (char)v14;
}
