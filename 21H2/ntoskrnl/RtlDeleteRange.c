/*
 * XREFs of RtlDeleteRange @ 0x1407615C0
 * Callers:
 *     ArbBacktrackAllocation @ 0x1407D21B0 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x1408A3260 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x140761828 (RtlpFreeRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x1407C5944 (RtlpDeleteFromMergedRange.c)
 */

__int64 __fastcall RtlDeleteRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  int v8; // r10d
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r11
  unsigned __int64 v12; // rdx
  unsigned __int64 **v13; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rdx
  unsigned __int64 *i; // rax
  __int64 v19; // rax

  v4 = *(_QWORD **)a1;
  v8 = -1073741172;
  v9 = (unsigned __int64 *)(*(_QWORD *)a1 - 40LL);
  while ( 1 )
  {
    v11 = *v4 - 40LL;
    if ( (_QWORD *)a1 == v4 )
      break;
    v10 = *v9;
    if ( a3 < *v9 )
      break;
    if ( (*((_BYTE *)v9 + 34) & 1) != 0 )
    {
      if ( a2 >= v10 && a3 <= v9[1] )
      {
        v15 = (_QWORD *)v9[2];
        v16 = v15 - 5;
        v17 = *v15 - 40LL;
        for ( i = v15 - 2; v9 != i; i = (unsigned __int64 *)(v19 + 24) )
        {
          if ( *v16 == a2 && v16[1] == a3 && v16[3] == a4 )
          {
            v8 = RtlpDeleteFromMergedRange(v16, v9);
            goto LABEL_13;
          }
          v19 = v17;
          v16 = (_QWORD *)v17;
          v17 = *(_QWORD *)(v17 + 40) - 40LL;
        }
      }
    }
    else if ( v10 == a2 && v9[1] == a3 && v9[3] == a4 )
    {
      v12 = v9[5];
      if ( *(unsigned __int64 **)(v12 + 8) != v9 + 5 || (v13 = (unsigned __int64 **)v9[6], *v13 != v9 + 5) )
        __fastfail(3u);
      *v13 = (unsigned __int64 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlpFreeRangeListEntry(v9);
      v8 = 0;
LABEL_13:
      if ( v8 >= 0 )
      {
        --*(_DWORD *)(a1 + 20);
        ++*(_DWORD *)(a1 + 24);
      }
      return (unsigned int)v8;
    }
    v9 = (unsigned __int64 *)v11;
    v4 = (_QWORD *)(v11 + 40);
  }
  return (unsigned int)v8;
}
