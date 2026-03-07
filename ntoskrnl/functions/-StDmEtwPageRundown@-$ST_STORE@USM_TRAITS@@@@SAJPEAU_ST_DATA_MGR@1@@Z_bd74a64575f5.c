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
