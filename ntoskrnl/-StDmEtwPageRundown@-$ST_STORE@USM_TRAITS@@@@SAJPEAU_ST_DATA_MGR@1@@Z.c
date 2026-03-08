/*
 * XREFs of ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C369C
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C62AC (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x14035911C (SmEtwEnabled.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14045C554 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405B836C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1405B909C (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405B9380 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x1405C8CA0 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwPageRundown(__int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edi
  int v4; // r12d
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 LeafSibling; // rax
  __int64 v9; // rbp
  __int16 v10; // bx
  _DWORD *v11; // rax
  int v12; // r9d
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  v2 = SmEtwEnabled(3);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
           (__int64)&v14,
           a1) == -1 )
    {
LABEL_18:
      v3 = -1073741818;
      goto LABEL_19;
    }
    v5 = *((_QWORD *)&v14 + 1);
    v6 = v14;
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_19;
      v5 += 8LL;
      v7 = (unsigned __int16)*(_DWORD *)v6 + 2LL;
      *((_QWORD *)&v14 + 1) = v5;
      if ( v5 >= v6 + 8 * v7 )
      {
        if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
        {
          LeafSibling = *(_QWORD *)(v6 + 8);
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                          (__int64)a1,
                          v6);
          if ( LeafSibling == -1 )
          {
            v9 = -1LL;
            goto LABEL_15;
          }
        }
        if ( !LeafSibling )
        {
          v9 = 0LL;
          goto LABEL_15;
        }
        v5 = LeafSibling + 16;
        *(_QWORD *)&v14 = LeafSibling;
        *((_QWORD *)&v14 + 1) = LeafSibling + 16;
        v6 = LeafSibling;
      }
      v9 = v5;
LABEL_15:
      if ( !v9 )
        goto LABEL_19;
      if ( v9 == -1 )
        goto LABEL_18;
      v10 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(a1, v9)[1] & 0xFFF;
      v11 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(a1, v9);
      SmEtwLogStoreOp(v4, 2, v9, v12, *v11, (char)a1, v10, 0);
    }
  }
  v3 = -1073741637;
LABEL_19:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    (__int64 *)&v14,
    a1);
  return v3;
}
