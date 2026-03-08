/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1405AE09C
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1405AE580 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1405AE600 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x1405AE10C (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x1405AE250 (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405AE6BC (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x1409BD7E0 (Normalization__GetCharacterInfo.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v3 = a1[14];
  v10 = 0;
  v4 = a2;
  Normalization__GetCharacterInfo(v3, a2, &v9, &v10);
  LOBYTE(v5) = v9;
  NormBuffer__SortBeforeSameClass(a1, v5);
  v7 = a1[13];
  if ( v7 != a1[5] )
    return NormBuffer__Insert(a1, v4);
  LOBYTE(v6) = v10;
  LOBYTE(v7) = v9;
  return NormBuffer__AppendEx(a1, v4, v7, v6);
}
