void __fastcall ST_STORE<SM_TRAITS>::StReleaseReadContext(union _SLIST_HEADER *a1, __int64 a2)
{
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    &a1[5],
    *(_QWORD *)(a2 + 24));
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    &a1[9],
    *(_QWORD *)(a2 + 32));
  if ( LOWORD(a1[253].Alignment) >= 0x10u )
    ExFreePoolWithTag((PVOID)a2, 0);
  else
    RtlpInterlockedPushEntrySList(a1 + 253, (PSLIST_ENTRY)a2);
}
