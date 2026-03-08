/*
 * XREFs of ViThunkReplaceIatEntryForClassDriverThunk @ 0x140AD8FE8
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x140AD8EC8 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14062A6B8 (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceIatEntryForClassDriverThunk(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 result; // rax
  unsigned int v5; // r11d
  _QWORD *v6; // rdx
  int v7; // r9d

  v2 = *a1;
  result = 0LL;
  while ( v2 != (__int64 *)a1 )
  {
    v5 = *((_DWORD *)v2 + 6);
    v6 = v2 + 4;
    v7 = 0;
    result = 0LL;
    if ( v5 )
    {
      while ( *a2 != *v6 )
      {
        v6 += 2;
        if ( ++v7 >= v5 )
        {
          result = 0LL;
          goto LABEL_6;
        }
      }
      MmReplaceImportEntry((ULONG_PTR)a2, v6[1]);
      return 1LL;
    }
LABEL_6:
    v2 = (__int64 *)*v2;
  }
  return result;
}
