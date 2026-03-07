_OWORD *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  _OWORD *result; // rax

  v3 = *(_DWORD *)(a3 + 24);
  if ( v3 == -1 || !v3 )
    result = (_OWORD *)(a3 + 8);
  else
    result = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v3 - 1));
  *(_OWORD *)a2 = *result;
  *(_QWORD *)(a2 + 8) -= 8LL;
  return result;
}
