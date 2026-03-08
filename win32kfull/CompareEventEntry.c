/*
 * XREFs of CompareEventEntry @ 0x1C00E0F54
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C00E08F8 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
 */

int __fastcall CompareEventEntry(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v6; // edi
  int result; // eax
  unsigned int i; // ebx
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a3 + 16);
  v6 = a1;
  result = memcmp((const void *)(a2 + 16), (const void *)(v3 + 16), 8uLL);
  if ( !result )
  {
    for ( i = *(unsigned __int8 *)(a3 + 45) + 2; i < v6; ++i )
    {
      v9 = 16LL * i;
      result = *(_DWORD *)(v9 + a2 + 8) - *(_DWORD *)(v9 + v3 + 8);
      if ( result )
        return result;
      result = memcmp(*(const void **)(v9 + a2), *(const void **)(v9 + v3), *(unsigned int *)(v9 + a2 + 8));
      if ( result )
        return result;
    }
    return 0;
  }
  return result;
}
