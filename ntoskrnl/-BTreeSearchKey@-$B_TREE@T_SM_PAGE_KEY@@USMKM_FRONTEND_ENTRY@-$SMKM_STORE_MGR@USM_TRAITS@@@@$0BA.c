/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1405BAD54
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402E6830 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1405BC92C (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BCB34 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1405BCFA4 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1405BD13C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1405BD2AC (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405BD6E0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CA1A8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CA3A0 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v5; // rdx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // r8
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  __int64 *v15; // r8
  unsigned int *v16; // r9

  v3 = 0;
  v5 = (_QWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    *v5 = 0LL;
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 0;
    v8 = 1;
    v9 = *a1;
    v10 = 0LL;
    if ( v9 )
      v10 = *(unsigned __int8 *)(v9 + 2);
    v11 = (_DWORD *)(a3 + 28);
    if ( *v11 < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, v5, v11, a3) )
      return (unsigned int)-1073741670;
    v5 = *(_QWORD **)a3;
  }
  v12 = *a1;
  if ( !*a1 )
  {
    if ( !v8 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v13 = -1;
    v14 = (unsigned __int16)*(_DWORD *)v12;
    if ( *(_BYTE *)(v12 + 3) )
      break;
    if ( (unsigned __int16)*(_DWORD *)v12 )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 16LL * ((v14 + v13) >> 1) + 16) <= a2 )
          v13 = (v14 + v13) >> 1;
        else
          v14 = (v14 + v13) >> 1;
      }
      while ( v13 + 1 != v14 );
    }
    if ( v8 )
    {
      *v5 = v12;
      v5[1] = v12 + 16 * (v14 + 1LL);
      v5 += 2;
    }
    if ( v14 )
      v15 = (__int64 *)(16LL * (v14 - 1) + v12 + 24);
    else
      v15 = (__int64 *)(v12 + 8);
    v12 = *v15;
  }
  if ( (unsigned __int16)*(_DWORD *)v12 )
  {
    do
    {
      if ( *(_DWORD *)(v12 + 8LL * ((v14 + v13) >> 1) + 16) >= a2 )
        v14 = (v14 + v13) >> 1;
      else
        v13 = (v14 + v13) >> 1;
    }
    while ( v13 + 1 != v14 );
  }
  *v5 = v12;
  v16 = (unsigned int *)(v12 + 8 * (v14 + 2LL));
  v5[1] = v16;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v5 - *(_QWORD *)a3) >> 4) + 1;
  if ( v14 >= (unsigned __int16)*(_DWORD *)v12 || *v16 < a2 || *v16 != a2 )
    return (unsigned int)-1073741275;
  return v3;
}
