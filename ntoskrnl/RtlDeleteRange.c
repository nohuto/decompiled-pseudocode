/*
 * XREFs of RtlDeleteRange @ 0x1408200A0
 * Callers:
 *     ArbBacktrackAllocation @ 0x1409331A0 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x140957150 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x14081F234 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140820318 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlDeleteRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  unsigned int v8; // r10d
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8

  v4 = *(_QWORD **)a1;
  v8 = -1073741172;
  v9 = *(_QWORD *)a1 - 40LL;
  while ( 1 )
  {
    v11 = *v4 - 40LL;
    if ( (_QWORD *)a1 == v4 )
      return v8;
    v10 = *(_QWORD *)v9;
    if ( a3 < *(_QWORD *)v9 )
      return v8;
    if ( (*(_BYTE *)(v9 + 34) & 1) != 0 )
    {
      if ( a2 >= v10 && a3 <= *(_QWORD *)(v9 + 8) )
      {
        v15 = *(_QWORD **)(v9 + 16);
        v16 = v15 - 5;
        while ( (_QWORD *)(v9 + 16) != v15 )
        {
          if ( *v16 == a2 && v16[1] == a3 && v16[3] == a4 )
          {
            v8 = RtlpDeleteFromMergedRange(v16, (_QWORD *)v9);
            if ( (v8 & 0x80000000) != 0 )
              return v8;
            goto LABEL_14;
          }
          v16 = (_QWORD *)(*v15 - 40LL);
          v15 = (_QWORD *)*v15;
        }
      }
    }
    else if ( v10 == a2 && *(_QWORD *)(v9 + 8) == a3 && *(_QWORD *)(v9 + 24) == a4 )
    {
      v12 = *(_QWORD *)(v9 + 40);
      if ( *(_QWORD *)(v12 + 8) != v9 + 40 || (v13 = *(_QWORD **)(v9 + 48), *v13 != v9 + 40) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlpFreeRangeListEntry((PVOID)v9);
      v8 = 0;
LABEL_14:
      --*(_DWORD *)(a1 + 20);
      ++*(_DWORD *)(a1 + 24);
      return v8;
    }
    v9 = v11;
    v4 = (_QWORD *)(v11 + 40);
  }
}
