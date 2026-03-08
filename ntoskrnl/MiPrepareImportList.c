/*
 * XREFs of MiPrepareImportList @ 0x14078ABD0
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 * Callees:
 *     MiAllocateImportList @ 0x14078AC28 (MiAllocateImportList.c)
 */

__int64 __fastcall MiPrepareImportList(_DWORD *a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 ImportList; // rax

  *a2 = 0LL;
  v2 = 0;
  if ( !a1 || !a1[3] )
    goto LABEL_9;
  do
  {
    if ( !*a1 )
      break;
    a1 += 5;
    ++v2;
  }
  while ( a1[3] );
  if ( !v2 )
  {
LABEL_9:
    ImportList = 0LL;
    goto LABEL_7;
  }
  ImportList = MiAllocateImportList(v2);
  if ( ImportList )
  {
LABEL_7:
    *a2 = ImportList;
    return 0LL;
  }
  return 3221225626LL;
}
