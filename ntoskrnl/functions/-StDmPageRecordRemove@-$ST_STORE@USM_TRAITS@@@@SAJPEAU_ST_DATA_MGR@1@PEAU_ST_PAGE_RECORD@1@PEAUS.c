__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordRemove(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // esi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d

  v6 = ((unsigned int)a2 - ((a2 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v7 = *(_DWORD *)(a1 + 112);
  if ( v7 == -1 || !v7 )
    v8 = a1 + 96;
  else
    v8 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v7 - 1);
  if ( **(_DWORD **)(v8 + 8) != v6 )
    NT_ASSERT("RegionEntry->PageRecordId == PageRecordId");
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(a1 + 184) &= ~1u;
  v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
         a1 + 64,
         a3,
         a3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
                  a1 + 128,
                  v6,
                  a1 + 152) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      v12 = *(_DWORD *)(a1 + 176);
      if ( v12 == -1 || !v12 )
        v13 = a1 + 160;
      else
        v13 = *(_QWORD *)(a1 + 152) + 16LL * (unsigned int)(v12 - 1);
      if ( **(_DWORD **)(v13 + 8) != v6 )
        NT_ASSERT("HashEntry->PageRecordId == PageRecordId");
      v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
              a1 + 128,
              a1 + 152,
              v11);
      if ( v10 < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    }
    v14 = 4096;
    if ( (*(_DWORD *)(a2 + 4) & 0xFFF) != 0 )
      v14 = *(_DWORD *)(a2 + 4) & 0xFFF;
    ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
      a1,
      (unsigned int)(*(_DWORD *)a2 >> *(_DWORD *)(a1 + 812)),
      -((unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v14) >> 4),
      0LL);
  }
  else if ( v9 != -1073741818 )
  {
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
  }
  return (unsigned int)v10;
}
