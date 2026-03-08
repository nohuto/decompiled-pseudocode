/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x14035C7E0
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14035C910 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char result; // al
  __int64 v12; // rax
  __int16 v13; // cx

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 32);
  v9 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  v10 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v9 )
  {
    v12 = RtlImageNtHeader(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v12 )
      return 0;
    v13 = *(_WORD *)(v12 + 24);
    if ( v13 != 267 && v13 != 523 )
      return 0;
    v9 = *(unsigned int *)(v12 + 80);
    if ( !*(_DWORD *)(v12 + 80) )
      return 0;
  }
  if ( a2 < v10 || a2 >= v10 + v9 )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
