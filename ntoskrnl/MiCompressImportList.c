/*
 * XREFs of MiCompressImportList @ 0x14078AB10
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiAddEntryToImportList @ 0x140A282AC (MiAddEntryToImportList.c)
 *     MiRemoveEntryFromImportList @ 0x140A2838C (MiRemoveEntryFromImportList.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiAllocateImportList @ 0x14078AC28 (MiAllocateImportList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiCompressImportList(_QWORD *P, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 ImportList; // rax

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !*P )
    goto LABEL_14;
  v7 = 0LL;
  do
  {
    v8 = P[v7 + 1];
    if ( v8 )
    {
      P[v4 + 1] = v8;
      v3 = v8 | 1;
      v4 = (unsigned int)(v4 + 1);
    }
    v7 = ++v5;
  }
  while ( (unsigned __int64)v5 < *P );
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      v9 = (unsigned int)v4;
      if ( (unsigned int)v4 == *P )
        return P;
      ImportList = MiAllocateImportList((unsigned int)v4);
      v3 = ImportList;
      if ( !ImportList )
        return P;
      memmove((void *)(ImportList + 8), P + 1, 8 * v9);
    }
  }
  else
  {
LABEL_14:
    v3 = -2LL;
  }
  if ( a2 )
    ExFreePoolWithTag(P, 0);
  return (_QWORD *)v3;
}
