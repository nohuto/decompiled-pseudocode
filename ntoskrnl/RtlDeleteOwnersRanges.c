/*
 * XREFs of RtlDeleteOwnersRanges @ 0x140820170
 * Callers:
 *     ArbDeleteOwnerRanges @ 0x140820080 (ArbDeleteOwnerRanges.c)
 *     ArbQueryConflict @ 0x1409333C0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140933760 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x14081F234 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140820318 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlDeleteOwnersRanges(__int64 **a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r9

  v4 = 0;
LABEL_2:
  v5 = **a1;
  v6 = (__int64)(*a1 - 5);
  while ( 1 )
  {
    v7 = v5 - 40;
    v8 = v6 + 40;
    if ( a1 == (__int64 **)(v6 + 40) )
      return (unsigned int)v4;
    if ( (*(_BYTE *)(v6 + 34) & 1) != 0 )
    {
      v11 = *(_QWORD **)(v6 + 16);
      v12 = v11 - 5;
      while ( (_QWORD *)(v6 + 16) != v11 )
      {
        if ( v12[3] == a2 )
        {
          v4 = RtlpDeleteFromMergedRange(v12, (_QWORD *)v6);
          if ( v4 < 0 )
            return (unsigned int)v4;
          --*((_DWORD *)a1 + 5);
          ++*((_DWORD *)a1 + 6);
          goto LABEL_2;
        }
        v12 = (_QWORD *)(*v11 - 40LL);
        v11 = (_QWORD *)*v11;
      }
    }
    else if ( *(_QWORD *)(v6 + 24) == a2 )
    {
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD **)(v6 + 48), *v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      RtlpFreeRangeListEntry((PVOID)v6);
      --*((_DWORD *)a1 + 5);
      ++*((_DWORD *)a1 + 6);
      v4 = 0;
    }
    v6 = v7;
    v5 = *(_QWORD *)(v7 + 40);
  }
}
