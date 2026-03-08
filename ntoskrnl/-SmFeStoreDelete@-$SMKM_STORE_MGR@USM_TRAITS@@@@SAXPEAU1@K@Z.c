/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402E6830
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1402E6790 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B97D8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1405BAD54 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1405BD13C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  struct _KTHREAD *v10; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  _OWORD v15[2]; // [rsp+20h] [rbp-A9h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-89h] BYREF
  int v17; // [rsp+58h] [rbp-71h]
  int v18; // [rsp+5Ch] [rbp-6Dh]
  __int64 v19; // [rsp+60h] [rbp-69h]
  _BYTE v20[136]; // [rsp+68h] [rbp-61h] BYREF

  memset(v20, 0, 0x80uLL);
  v16[1] = 0LL;
  v16[2] = 0LL;
  v19 = 0LL;
  v17 = 0;
  v16[0] = v20;
  v18 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v5 = *(_QWORD *)(a1 + 448);
  v15[0] = 0LL;
  if ( v5 )
  {
    while ( !*(_BYTE *)(v5 + 3) )
      v5 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)&v15[0] = v5;
    *((_QWORD *)&v15[0] + 1) = v5 + 8;
    goto LABEL_3;
  }
LABEL_2:
  v5 = *(_QWORD *)&v15[0];
LABEL_3:
  while ( v5 )
  {
    v6 = *((_QWORD *)&v15[0] + 1) + 8LL;
    v7 = (unsigned __int16)*(_DWORD *)v5 + 2LL;
    *((_QWORD *)&v15[0] + 1) = v6;
    if ( v6 >= v5 + 8 * v7 )
    {
      v8 = *(_QWORD *)(v5 + 8);
      v9 = v8 + 16;
      if ( v8 )
      {
        v5 = *(_QWORD *)(v5 + 8);
        v15[0] = __PAIR128__(v9, v8);
      }
      v6 = v9 & -(__int64)(v8 != 0);
    }
    if ( !v6 )
      break;
    if ( *(unsigned __int16 *)(v6 + 4) == a2 )
    {
      v12 = *(_DWORD *)v6;
      *(_BYTE *)(v6 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v16, v15);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v12,
        v16);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v13,
        v15,
        v16);
      goto LABEL_2;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  v10 = KeGetCurrentThread();
  if ( v10->SpecialApcDisable++ == -1 )
  {
    v10 = (struct _KTHREAD *)((char *)v10 + 152);
    if ( *(struct _KTHREAD **)&v10->Header.Lock != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery();
  }
  return (char)v10;
}
