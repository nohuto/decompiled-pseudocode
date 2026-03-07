void __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
        __int64 a1,
        __int64 a2,
        int a3)
{
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    a1,
    a2);
  if ( *(_DWORD *)(a2 + 24) != -1 && *(_QWORD *)a2 && !a3 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
}
