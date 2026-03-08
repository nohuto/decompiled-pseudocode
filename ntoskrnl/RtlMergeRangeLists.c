/*
 * XREFs of RtlMergeRangeLists @ 0x1409B5CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddRange @ 0x14081F654 (RtlpAddRange.c)
 *     RtlCopyRangeList @ 0x14081FAD0 (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x14081FB60 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x140820250 (RtlFreeRangeList.c)
 */

__int64 __fastcall RtlMergeRangeLists(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v7; // ebx
  __int64 v8; // rsi
  __int64 i; // rax
  __int64 *v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // r13
  __int64 *v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax

  v7 = RtlCopyRangeList(a1, a2);
  if ( v7 < 0 )
  {
LABEL_18:
    RtlFreeRangeList(a1);
  }
  else
  {
    v8 = *(_QWORD *)a3 - 40LL;
    if ( a3 != *(_QWORD *)a3 )
    {
      do
      {
        if ( (*(_BYTE *)(v8 + 34) & 1) != 0 )
        {
          for ( i = *(_QWORD *)(v8 + 16); ; i = *(_QWORD *)(v12 + 40) )
          {
            v12 = i - 40;
            if ( v8 + 16 == i )
              break;
            v10 = (__int64 *)RtlpCopyRangeListEntry(i - 40);
            if ( !v10 )
              goto LABEL_17;
            v11 = a4 | 1;
            if ( (*(_BYTE *)(v12 + 33) & 2) == 0 )
              v11 = a4;
            v7 = RtlpAddRange((_QWORD *)a1, v10, v11);
          }
        }
        else
        {
          v13 = (__int64 *)RtlpCopyRangeListEntry(v8);
          if ( !v13 )
          {
LABEL_17:
            v7 = -1073741670;
            goto LABEL_18;
          }
          v14 = a4 | 1;
          if ( (*(_BYTE *)(v8 + 33) & 2) == 0 )
            v14 = a4;
          v7 = RtlpAddRange((_QWORD *)a1, v13, v14);
          if ( v7 < 0 )
            goto LABEL_18;
        }
        v15 = *(_QWORD *)(v8 + 40);
        v8 = v15 - 40;
      }
      while ( a3 != v15 );
    }
    *(_DWORD *)(a1 + 20) += *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a1 + 24) += *(_DWORD *)(a3 + 20);
  }
  return (unsigned int)v7;
}
