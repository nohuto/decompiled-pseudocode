__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineRegion(__int64 a1, int a2)
{
  unsigned __int16 *v2; // rbx
  int v5; // r15d
  unsigned int *PreviousEntry; // rax
  __int64 v7; // r8
  struct _MDL *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // r15
  __int64 v12; // r8
  struct _MDL *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+28h] [rbp-8h]
  unsigned __int16 *Pool2; // [rsp+80h] [rbp+50h] BYREF

  v2 = *(unsigned __int16 **)(a1 + 1056);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1056) = 0LL;
    Pool2 = v2;
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 4096LL, 1951624563LL);
    v2 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
  }
  *(_QWORD *)v2 = 0LL;
  *(_DWORD *)v2 = a2;
  *((_DWORD *)v2 + 1) = 528384;
  v5 = *(_DWORD *)(a1 + 808) | (a2 << *(_DWORD *)(a1 + 812));
  v15 = 0LL;
  v16 = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) |= 1u;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  **(_DWORD **)(a1 + 760) = v5;
  if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
              a1 + 88,
              a1 + 64,
              *(_DWORD *)(a1 + 768)) < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  while ( 1 )
  {
    PreviousEntry = (unsigned int *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                      a1 + 64,
                                      a1 + 88);
    if ( !PreviousEntry )
      break;
    v8 = (struct _MDL *)*PreviousEntry;
    v9 = (unsigned int)v8 >> *(_DWORD *)(a1 + 456);
    _BitScanReverse((unsigned int *)&v10, v9);
    v7 = 2 * (v9 ^ (unsigned int)(1 << v10));
    v11 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + *(_DWORD *)(a1 + 464) * ((unsigned int)v8 & *(_DWORD *)(a1 + 460))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v10 + 192) + 16 * (v9 ^ (unsigned int)(1 << v10))));
    if ( *v11 >> *(_DWORD *)(a1 + 812) != a2 )
      break;
    if ( (v11[1] & 0xFFFFF000) <= 0x1000
      && (unsigned int)ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(a1, (unsigned int *)v2, (unsigned int *)&v15, v11) == -2147483643 )
    {
      result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &Pool2, v12, v13);
      if ( (int)result < 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (__int64 *)(a1 + 64),
          a1 + 88);
      *(_DWORD *)(a1 + 120) |= 1u;
      **(_DWORD **)(a1 + 760) = *v11;
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                  a1 + 88,
                  a1 + 64,
                  *(_DWORD *)(a1 + 768)) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      v2 = Pool2;
      v15 = 0LL;
      v16 = 0;
      *(_QWORD *)Pool2 = 0LL;
      *(_DWORD *)v2 = a2;
      *((_DWORD *)v2 + 1) = 528384;
    }
  }
  if ( v2 + 4 >= (unsigned __int16 *)((char *)v2 + v2[3]) )
  {
LABEL_22:
    result = 0LL;
    goto LABEL_23;
  }
  result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &Pool2, v7, v8);
  if ( (int)result >= 0 )
  {
    v2 = Pool2;
    goto LABEL_22;
  }
LABEL_26:
  v2 = Pool2;
LABEL_23:
  if ( v2 )
    *(_QWORD *)(a1 + 1056) = v2;
  return result;
}
