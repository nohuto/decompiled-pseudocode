/*
 * XREFs of RtlpAddRange @ 0x14081F654
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x14081F234 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 *     RtlMergeRangeLists @ 0x1409B5CD0 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpAddIntersectingRanges @ 0x14081F70C (RtlpAddIntersectingRanges.c)
 */

__int64 __fastcall RtlpAddRange(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD **v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 *v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx

  *((_BYTE *)a2 + 33) &= ~2u;
  v4 = a2[1];
  v6 = *a2;
  v7 = 0;
  v8 = (_QWORD **)(a1 + 1);
  if ( (_QWORD *)*a1 == a1 || v6 > *(*v8 - 4) )
  {
LABEL_3:
    v9 = *v8;
    v10 = a2 + 5;
    if ( (_QWORD *)**v8 != a1 )
      __fastfail(3u);
    *v10 = a1;
    a2[6] = (__int64)v9;
    *v9 = v10;
    *v8 = v10;
  }
  else
  {
    v12 = (unsigned __int64 *)(*a1 - 40LL);
    while ( 1 )
    {
      if ( v4 < *v12 )
      {
        v14 = (__int64 *)v12[6];
        v15 = *v14;
        a2[5] = *v14;
        a2[6] = (__int64)v14;
        *(_QWORD *)(v15 + 8) = a2 + 5;
        *v14 = (__int64)(a2 + 5);
        return v7;
      }
      if ( *v12 >= v6 || v12[1] >= v6 )
        return (unsigned int)RtlpAddIntersectingRanges(a1, v12, a2, a3);
      v13 = (_QWORD *)v12[5];
      v12 = v13 - 5;
      if ( a1 == v13 )
        goto LABEL_3;
    }
  }
  return v7;
}
