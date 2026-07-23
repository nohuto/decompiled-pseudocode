/*
 * XREFs of RtlDeleteOwnersRanges @ 0x140761670
 * Callers:
 *     ArbDeleteOwnerRanges @ 0x1407615A0 (ArbDeleteOwnerRanges.c)
 *     ArbQueryConflict @ 0x140867320 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1408676B0 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x140761828 (RtlpFreeRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x1407C5944 (RtlpDeleteFromMergedRange.c)
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
  __int64 v13; // rcx
  __int64 i; // rax
  __int64 v15; // rax

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
      v13 = *v11 - 40LL;
      for ( i = (__int64)(v11 - 2); v6 != i; i = v15 + 24 )
      {
        if ( v12[3] == a2 )
        {
          v4 = RtlpDeleteFromMergedRange(v12, (PVOID)v6);
          if ( v4 < 0 )
            return (unsigned int)v4;
          --*((_DWORD *)a1 + 5);
          ++*((_DWORD *)a1 + 6);
          goto LABEL_2;
        }
        v15 = v13;
        v12 = (_QWORD *)v13;
        v13 = *(_QWORD *)(v13 + 40) - 40LL;
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
