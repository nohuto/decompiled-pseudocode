/*
 * XREFs of NormBuffer__Insert @ 0x1405AE250
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1405AE09C (NormBuffer__AppendAndSortDecomposed.c)
 *     NormBuffer__Insert @ 0x1405AE250 (NormBuffer__Insert.c)
 *     Normalization__NormalizeCharacter @ 0x1409BE3B8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__Insert @ 0x1405AE250 (NormBuffer__Insert.c)
 */

bool __fastcall NormBuffer__Insert(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v3; // r9
  __int16 *v6; // r8
  int v7; // ebp
  char v8; // bl
  __int16 v10; // ax

  v3 = (__int16 *)a1[5];
  v6 = (__int16 *)a1[8];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v3 < a1[4] )
    {
      while ( a3 != v3 )
      {
        v10 = *a3;
        *a3 = a2;
        LOWORD(a2) = v10;
        ++a3;
      }
      *v3 = a2;
      a1[5] = v3 + 1;
      if ( v6 == v3 - 1 )
        a1[8] = v3;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v7 = a2 - 0x10000;
    v8 = 0;
    if ( (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216)) )
      return (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)(v7 / 1024 - 10240)) != 0;
    return v8;
  }
}
