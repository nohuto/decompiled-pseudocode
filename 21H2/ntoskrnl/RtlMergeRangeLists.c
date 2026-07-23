/*
 * XREFs of RtlMergeRangeLists @ 0x14090FF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyRangeList @ 0x1407613C0 (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x140761450 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x140761750 (RtlFreeRangeList.c)
 *     RtlpAddRange @ 0x140764674 (RtlpAddRange.c)
 */

__int64 __fastcall RtlMergeRangeLists(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v7; // ebx
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // rsi
  __int64 *v11; // rax
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rsi
  __int64 *v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rax

  v7 = RtlCopyRangeList(a1, a2);
  if ( v7 < 0 )
  {
LABEL_19:
    RtlFreeRangeList((_QWORD *)a1);
  }
  else
  {
    v8 = *(_QWORD *)a3 - 40LL;
    if ( a3 != *(_QWORD *)a3 )
    {
      v9 = a4 | 1;
      do
      {
        if ( (*(_BYTE *)(v8 + 34) & 1) != 0 )
        {
          v10 = *(_QWORD *)(v8 + 16);
          while ( 1 )
          {
            v14 = v10 - 40;
            if ( v8 == v14 + 24 )
              break;
            v11 = RtlpCopyRangeListEntry(v14);
            if ( !v11 )
              goto LABEL_18;
            v12 = a4 | 1;
            if ( (*(_BYTE *)(v14 + 33) & 2) == 0 )
              v12 = a4;
            v13 = RtlpAddRange((_QWORD *)a1, v11, v12);
            v10 = *(_QWORD *)(v14 + 40);
            v7 = v13;
          }
          v9 = a4 | 1;
        }
        else
        {
          v15 = RtlpCopyRangeListEntry(v8);
          if ( !v15 )
          {
LABEL_18:
            v7 = -1073741670;
            goto LABEL_19;
          }
          v16 = v9;
          if ( (*(_BYTE *)(v8 + 33) & 2) == 0 )
            v16 = a4;
          v7 = RtlpAddRange((_QWORD *)a1, v15, v16);
          if ( v7 < 0 )
            goto LABEL_19;
        }
        v17 = *(_QWORD *)(v8 + 40);
        v8 = v17 - 40;
      }
      while ( a3 != v17 );
    }
    *(_DWORD *)(a1 + 20) += *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a1 + 24) += *(_DWORD *)(a3 + 20);
  }
  return (unsigned int)v7;
}
