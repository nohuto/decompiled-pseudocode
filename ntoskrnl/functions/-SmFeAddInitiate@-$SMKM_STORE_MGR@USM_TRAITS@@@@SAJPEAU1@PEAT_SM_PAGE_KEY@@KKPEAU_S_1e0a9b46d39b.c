__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int16 v9; // si
  unsigned int v10; // edi
  volatile signed __int64 *v11; // r14
  int v12; // r15d
  int v13; // r12d
  ULONG_PTR v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // esi
  struct _KTHREAD *v26; // rax
  NTSTATUS v27; // eax
  struct _KTHREAD *v28; // rcx
  NTSTATUS v29; // esi
  ULONG_PTR v30; // rcx
  struct _KTHREAD *v31; // rax
  bool v32; // zf
  __int64 v33; // r9
  struct _KTHREAD *v34; // rcx
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  __int128 Object; // [rsp+50h] [rbp-B0h] BYREF
  char *v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v42; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  _QWORD v46[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  _BYTE v50[136]; // [rsp+C8h] [rbp-38h] BYREF

  v45 = a5;
  v9 = a4;
  v42 = a2;
  v44 = a6;
  memset(v50, 0, 0x80uLL);
  v10 = *a2;
  v11 = (volatile signed __int64 *)(a1 + 440);
  v48 = 8;
  v37 = 0x1000000000000LL;
  v40 = 0LL;
  WORD2(v37) = v9;
  v46[0] = v50;
  v38 = 0;
  v46[1] = 0LL;
  v12 = 0;
  v46[2] = 0LL;
  v13 = 0;
  v49 = 0LL;
  v47 = 0;
  v14 = a1 + 440;
  Object = 0LL;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v14, 0LL);
    goto LABEL_7;
  }
  if ( (a7 & 4) == 0 )
  {
    v17 = KeGetCurrentThread();
    --v17->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v14, 0LL);
    goto LABEL_7;
  }
  if ( !StLockTryAcquireExclusive(v14, &v38) )
    return 3221225557LL;
  while ( 1 )
  {
LABEL_7:
    v18 = (__int64 *)(a1 + 448);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (__int64 *)(a1 + 448),
      v10,
      (__int64)v46);
    v41 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v19,
      (__int64)&v41,
      (__int64)v46);
    if ( !(_QWORD)v41 )
      goto LABEL_35;
    v22 = *((_QWORD *)&v41 + 1) + 8LL;
    v23 = (unsigned __int16)*(_DWORD *)v41 + 2LL;
    *((_QWORD *)&v41 + 1) = v22;
    if ( v22 >= (__int64)v41 + 8 * v23 )
    {
      v24 = *(_QWORD *)(v41 + 8);
      if ( v24 )
      {
        *(_QWORD *)&v41 = *(_QWORD *)(v41 + 8);
        *((_QWORD *)&v41 + 1) = v24 + 16;
      }
      v22 = (v24 + 16) & ((unsigned __int128)-(__int128)v24 >> 64);
    }
    if ( !v22 || v20 < *(_DWORD *)v22 && v21 < *(_DWORD *)v22 )
    {
LABEL_35:
      if ( (a7 & 2) != 0 )
      {
        v25 = 0;
        goto LABEL_37;
      }
      while ( 1 )
      {
        LODWORD(v37) = v10;
        v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
                v18,
                v10,
                (__int64)v46);
        if ( v25 != -1073741275 )
          break;
        v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v46,
                &v37);
        if ( v25 < 0 )
          goto LABEL_48;
        if ( ++v12 == a3 )
        {
          SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v44, a1, a4, v45);
          v25 = 0;
          goto LABEL_50;
        }
        ++v10;
        v18 = (__int64 *)(a1 + 448);
      }
      if ( v25 >= 0 )
        v25 = -1073741484;
LABEL_48:
      if ( v12 )
        SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v42, v12, v33, 2);
      goto LABEL_50;
    }
    if ( (*(_BYTE *)(v22 + 7) & 1) != 0 )
      break;
    v25 = -1073740682;
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_33;
    v40 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    *(_QWORD *)(a1 + 1672) = &Object;
    LOWORD(Object) = 0;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    *(_DWORD *)(a1 + 1664) = v10;
    if ( (a7 & 2) != 0 )
    {
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
    }
    else if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    }
    KeAbPostRelease(a1 + 440);
    v26 = KeGetCurrentThread();
    v32 = v26->SpecialApcDisable++ == -1;
    if ( v32 && ($C71981A45BEB2B45F82C232A7085991E *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery();
    Timeout.QuadPart = -2500000LL;
    v27 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v28 = KeGetCurrentThread();
    v29 = v27;
    --v28->SpecialApcDisable;
    v30 = a1 + 440;
    if ( (a7 & 2) != 0 )
      ExAcquirePushLockSharedEx(v30, 0LL);
    else
      ExAcquirePushLockExclusiveEx(v30, 0LL);
    *(_QWORD *)(a1 + 1672) = 0LL;
    if ( v29 )
    {
      v25 = -1073740682;
      goto LABEL_33;
    }
    v13 = 1;
  }
  v25 = -1073740747;
LABEL_33:
  if ( (a7 & 2) != 0 )
  {
LABEL_37:
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
    v31 = KeGetCurrentThread();
    v32 = v31->SpecialApcDisable++ == -1;
    if ( v32 )
    {
      v32 = v31->ApcState.ApcListHead[0].Flink == v31->ApcState.ApcListHead;
      goto LABEL_54;
    }
    return (unsigned int)v25;
  }
LABEL_50:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  v34 = KeGetCurrentThread();
  v32 = v34->SpecialApcDisable++ == -1;
  if ( v32 )
  {
    v32 = v34->ApcState.ApcListHead[0].Flink == v34->ApcState.ApcListHead;
LABEL_54:
    if ( !v32 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v25;
}
