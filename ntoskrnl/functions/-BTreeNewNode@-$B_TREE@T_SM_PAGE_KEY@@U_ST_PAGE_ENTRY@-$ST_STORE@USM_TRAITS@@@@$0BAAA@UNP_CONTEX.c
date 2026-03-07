_BYTE *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  char v4; // di
  _BYTE *v5; // rax
  _BYTE *v6; // rbx

  v4 = a2;
  v5 = NP_CONTEXT::NpNodeAllocate((struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)), a2, a2);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x1000uLL);
    v6[2] = a3;
    v6[3] = v4;
  }
  return v6;
}
