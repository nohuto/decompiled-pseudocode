/*
 * XREFs of RtlpCopyRangeListEntry @ 0x14081FB60
 * Callers:
 *     RtlpAddIntersectingRanges @ 0x14081F70C (RtlpAddIntersectingRanges.c)
 *     RtlCopyRangeList @ 0x14081FAD0 (RtlCopyRangeList.c)
 *     RtlMergeRangeLists @ 0x1409B5CD0 (RtlMergeRangeLists.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     RtlpDeleteRangeListEntry @ 0x1408202B8 (RtlpDeleteRangeListEntry.c)
 */

char *__fastcall RtlpCopyRangeListEntry(__int64 a1)
{
  char *v2; // rax
  char *v3; // rdi
  char *v4; // rbx
  __int64 v6; // r14
  __int64 i; // rax
  __int64 v8; // rsi
  _OWORD *v9; // rax
  _OWORD *v10; // rdx
  char **v11; // rax
  char *v12; // rdx

  v2 = (char *)ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2 + 16;
    *(_OWORD *)v2 = *(_OWORD *)a1;
    *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v2 + 2) = *(_OWORD *)(a1 + 32);
    *((_QWORD *)v2 + 6) = *(_QWORD *)(a1 + 48);
    if ( (v2[33] & 0x10) != 0 )
      ++**(_DWORD **)v4;
    if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
    {
      v6 = a1 + 16;
      *((_QWORD *)v2 + 3) = v2 + 16;
      *(_QWORD *)v4 = v4;
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v8 + 40) )
      {
        v8 = i - 40;
        if ( v6 == i )
          break;
        v9 = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
        v10 = v9;
        if ( !v9 )
        {
          RtlpDeleteRangeListEntry(v3);
          return 0LL;
        }
        *v9 = *(_OWORD *)v8;
        v9[1] = *(_OWORD *)(v8 + 16);
        v9[2] = *(_OWORD *)(v8 + 32);
        *((_QWORD *)v9 + 6) = *(_QWORD *)(v8 + 48);
        if ( (*((_BYTE *)v9 + 33) & 0x10) != 0 )
          ++**((_DWORD **)v9 + 2);
        v11 = (char **)*((_QWORD *)v4 + 1);
        v12 = (char *)v10 + 40;
        if ( *v11 != v4 )
          __fastfail(3u);
        *(_QWORD *)v12 = v4;
        *((_QWORD *)v12 + 1) = v11;
        *v11 = v12;
        *((_QWORD *)v4 + 1) = v12;
      }
    }
  }
  return v3;
}
