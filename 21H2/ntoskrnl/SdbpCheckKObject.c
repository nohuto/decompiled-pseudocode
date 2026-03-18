/*
 * XREFs of SdbpCheckKObject @ 0x140843160
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     SdbpCreateSearchDBContext @ 0x14075B270 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14075E448 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14075E4A8 (SdbpReleaseSearchDBContext.c)
 *     SdbpMatchCpu @ 0x14084328C (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x1408432E0 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140843334 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140843388 (SdbpMatchAcpi.c)
 *     SdbpCheckForMatch @ 0x1408433DC (SdbpCheckForMatch.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        wchar_t *a5,
        wchar_t *a6,
        _QWORD *a7)
{
  unsigned int SearchDBContext; // ebx
  const wchar_t **v11; // rsi
  __int64 v12; // r15
  _QWORD *v13; // rdi
  int v15; // eax
  _QWORD v16[18]; // [rsp+30h] [rbp-51h] BYREF
  int v17; // [rsp+D0h] [rbp+4Fh] BYREF
  const wchar_t **v18; // [rsp+E0h] [rbp+5Fh] BYREF
  int v19; // [rsp+E8h] [rbp+67h] BYREF
  int v20; // [rsp+ECh] [rbp+6Bh]

  v20 = HIDWORD(a4);
  memset(v16, 0, 0x60uLL);
  v19 = 0;
  SearchDBContext = 0;
  v17 = 0;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8);
  v18 = 0LL;
  if ( !a3
    || (v15 = AslFileMappingCreate((wchar_t ***)&v18, a3, (void *)0xFFFFFFFFFFFFFFFFLL, a5, a6), v11 = v18, v15 >= 0) )
  {
    memset((char *)v16 + 4, 0, 0x5CuLL);
    LODWORD(v16[0]) = 26;
    SearchDBContext = SdbpCreateSearchDBContext(v16, v11);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, v12, a2, (unsigned int)v16, (__int64)&v17, (__int64)&v19);
      if ( SearchDBContext )
      {
        v13 = a7;
        if ( a7 )
        {
          SearchDBContext = SdbpMatchAcpi(v12, a2, *a7);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(v12, a2, v13[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(v12, a2, v13[2]);
              if ( SearchDBContext )
                SearchDBContext = SdbpMatchCpu(v12, a2, v13[3]);
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v16);
  AslFileMappingDelete((PVOID *)v11);
  return SearchDBContext;
}
