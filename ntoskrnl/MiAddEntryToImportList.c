/*
 * XREFs of MiAddEntryToImportList @ 0x140A282AC
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiCompressImportList @ 0x14078AB10 (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x14078AC28 (MiAllocateImportList.c)
 */

_QWORD *__fastcall MiAddEntryToImportList(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  unsigned __int64 *v7; // rcx

  if ( a1 == (__int64 *)-2LL )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = 1LL;
    if ( ((unsigned __int8)a1 & 1) == 0 )
      v4 = *a1;
  }
  result = MiAllocateImportList(v4 + 1);
  v6 = result;
  if ( result )
  {
    if ( v4 )
    {
      v7 = result + 1;
      if ( ((unsigned __int8)a1 & 1) != 0 )
        *v7 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        memmove(v7, a1 + 1, 8 * v4);
    }
    v6[v4 + 1] = a2;
    return MiCompressImportList(v6, 1);
  }
  return result;
}
