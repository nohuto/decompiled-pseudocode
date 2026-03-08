/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x1405AE6BC
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1405AE09C (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1405AE16C (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__PageLookup @ 0x1409BEC04 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x1409BEC1C (Normalization__TableLookup.c)
 */

char __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int16 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int16 *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  v4 = a1[10];
  a1[13] = v2;
  if ( v2 != v4 )
  {
    v17 = (unsigned __int16 *)(v2 - 2);
    LODWORD(v2) = NormBuffer__GetCurrentOutputChar((__int64)a1, &v17);
    v6 = 4LL;
    v7 = (unsigned int)v2;
    if ( *(int *)(v5 + 88) <= 0xFFFF )
      v6 = 2LL;
    v8 = (unsigned __int16 *)(v4 - v6);
    if ( v17 != v8 )
    {
      v9 = *(_QWORD *)(v5 + 112);
      do
      {
        LOBYTE(v10) = Normalization__PageLookup(v9, v7);
        LOBYTE(v2) = Normalization__TableLookup(v12, v11, v10) & 0x3F;
        if ( (unsigned __int8)v2 < a2 )
          break;
        *(_QWORD *)(v14 + 104) = v15;
        v17 = (unsigned __int16 *)(v15 - 2);
        LODWORD(v2) = NormBuffer__GetCurrentOutputChar(v13, &v17);
        v7 = (unsigned int)v2;
      }
      while ( v17 != v8 );
    }
  }
  return v2;
}
