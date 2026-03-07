__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, __int16 a4)
{
  unsigned int v4; // edi
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KEVENT *v12; // rcx
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v20[3]; // [rsp+28h] [rbp-B1h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-99h] BYREF
  int v22; // [rsp+58h] [rbp-81h]
  int v23; // [rsp+5Ch] [rbp-7Dh]
  __int64 v24; // [rsp+60h] [rbp-79h]
  _BYTE v25[136]; // [rsp+68h] [rbp-71h] BYREF

  v4 = *a2;
  memset(v25, 0, 0x80uLL);
  v21[1] = 0LL;
  v21[2] = 0LL;
  v24 = 0LL;
  v22 = 0;
  v21[0] = v25;
  v6 = 0;
  v23 = 8;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)v20 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (__int64 *)(a1 + 448),
      v4,
      (__int64)v21);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v8,
      (__int64)v20,
      (__int64)v21);
    if ( v20[0] )
    {
      v9 = v20[1] + 8;
      v10 = (unsigned __int16)*(_DWORD *)v20[0] + 2LL;
      v20[1] = v9;
      if ( v9 >= v20[0] + 8 * v10 )
      {
        v11 = *(_QWORD *)(v20[0] + 8);
        if ( v11 )
        {
          v20[0] = *(_QWORD *)(v20[0] + 8);
          v20[1] = v11 + 16;
        }
        v9 = (v11 + 16) & -(__int64)(v11 != 0);
      }
    }
    else
    {
      v9 = 0LL;
    }
    v12 = *(struct _KEVENT **)(a1 + 1672);
    if ( v12 && *(_DWORD *)(a1 + 1664) == *(_DWORD *)v9 )
      KeSetEvent(v12, 0, 0);
    *(_BYTE *)(v9 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v21, v20);
    if ( ++v6 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  v13 = KeGetCurrentThread();
  v14 = v13->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  v15 = (__int64 *)SmKmStoreRefFromStoreIndex(a1, a4 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v16, *v15);
}
