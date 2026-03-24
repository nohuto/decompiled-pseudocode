/*
 * XREFs of ViThunkReplaceImportEntry @ 0x1409D9470
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x1409D8AA4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1409D9354 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportEntry(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  int v8; // ecx
  __int64 v9; // r9

  v2 = *a1;
  for ( result = 0LL; v2 != (__int64 *)a1; v2 = (__int64 *)*v2 )
  {
    v6 = *((unsigned int *)v2 + 6);
    v7 = v2 + 4;
    v8 = 0;
    if ( (_DWORD)v6 )
    {
      v9 = *a2;
      while ( v9 != *v7 )
      {
        v7 += 2;
        if ( ++v8 >= (unsigned int)v6 )
          goto LABEL_8;
      }
      MmReplaceImportEntry((ULONG_PTR)a2, v7[1], v6, v9);
      result = 1LL;
    }
LABEL_8:
    if ( (_DWORD)result == 1 )
      break;
  }
  return result;
}
