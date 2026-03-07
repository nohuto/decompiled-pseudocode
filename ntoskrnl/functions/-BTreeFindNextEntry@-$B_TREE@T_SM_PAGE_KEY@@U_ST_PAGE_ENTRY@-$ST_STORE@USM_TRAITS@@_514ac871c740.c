unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindNextEntry(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  int **v6; // rdi
  int *v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r10d
  int *v10; // r11
  int *v11; // rdx
  __int64 LeafSibling; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v6 = (int **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
    v7 = *v6;
    v8 = (unsigned __int64)(v6[1] + 2);
    v6[1] = (int *)v8;
    v9 = *v7;
    v10 = &v7[2 * (unsigned __int16)*v7 + 4];
    if ( v8 >= (unsigned __int64)v10 )
    {
      v11 = v7 + 4;
      if ( (_WORD)v9 )
        v11 = v10 - 2;
      v6[1] = v11;
      LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                      a1,
                      a2);
      if ( LeafSibling )
      {
        v3 = -1LL;
        if ( LeafSibling != -1 )
        {
          v3 = LeafSibling + 16;
          v6[1] = (int *)(LeafSibling + 16);
        }
      }
    }
    else
    {
      return v8;
    }
  }
  return v3;
}
