void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
        __int64 a1,
        __int64 a2,
        int a3)
{
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a2);
  if ( *(_DWORD *)(a2 + 24) != -1 && *(_QWORD *)a2 && !a3 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
}
