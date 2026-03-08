/*
 * XREFs of ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14045D10A
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405B836C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1405B909C (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405B9380 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B9808 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1405BAEEC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x1405C2950 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1405C6350 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmWorkQueueGetDepth @ 0x1405C7894 (SmWorkQueueGetDepth.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 LeafSibling; // rax
  __int64 v10; // rsi
  _OWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 1905);
  v12[0] = 0LL;
  if ( (v2 & 3) == 1 )
  {
    *(_BYTE *)(a1 + 1905) = v2 & 0xFC | 2;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
      v12,
      a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 1064);
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1,
      v3,
      a1 + 24);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      v12,
      a1 + 24);
  }
  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 1896) )
  {
    v6 = *((_QWORD *)&v12[0] + 1);
    v7 = *(_QWORD *)&v12[0];
    while ( v7 )
    {
      v6 += 8LL;
      v8 = (unsigned __int16)*(_DWORD *)v7 + 2LL;
      *((_QWORD *)&v12[0] + 1) = v6;
      if ( v6 < v7 + 8 * v8 )
        goto LABEL_17;
      if ( **(_DWORD **)(a1 + 16) == -1 )
      {
        LeafSibling = *(_QWORD *)(v7 + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        v7);
        if ( LeafSibling == -1 )
        {
          v10 = -1LL;
          goto LABEL_18;
        }
      }
      if ( LeafSibling )
      {
        v6 = LeafSibling + 16;
        *(_QWORD *)&v12[0] = LeafSibling;
        *((_QWORD *)&v12[0] + 1) = LeafSibling + 16;
        v7 = LeafSibling;
LABEL_17:
        v10 = v6;
        goto LABEL_18;
      }
      v10 = 0LL;
LABEL_18:
      if ( !v10 )
        break;
      if ( v5 < 0x200
        || !(unsigned int)SmWorkQueueGetDepth(*(_QWORD *)(a1 + 800), *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6022LL) == 0) )
      {
        ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v10);
        ++v5;
        if ( *(_DWORD *)(a1 + 1896) )
          continue;
      }
      *(_DWORD *)(a1 + 1064) = *(_DWORD *)v10;
      goto LABEL_24;
    }
  }
  v4 = 1024;
  *(_BYTE *)(a1 + 1905) = *(_BYTE *)(a1 + 1905) & 0xFC | 1;
LABEL_24:
  if ( *(_DWORD *)(a1 + 1896) <= v4 )
    *(_BYTE *)(a1 + 1905) &= 0xFCu;
  else
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), 5LL, 30000LL, 4294967294LL);
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
           v12,
           a1);
}
