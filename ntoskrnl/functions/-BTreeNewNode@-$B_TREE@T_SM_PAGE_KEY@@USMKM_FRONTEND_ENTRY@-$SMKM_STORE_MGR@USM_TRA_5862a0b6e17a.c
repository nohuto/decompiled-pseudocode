_BYTE *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
        __int64 a1,
        char a2,
        char a3)
{
  _BYTE *Pool2; // rax
  _BYTE *v6; // rbx

  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 4096LL, 1950510451LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x1000uLL);
    v6[2] = a3;
    v6[3] = a2;
  }
  return v6;
}
