/*
 * XREFs of SdbpCheckKObject @ 0x1407A1BD8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1407A1A40 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     SdbpCheckForMatch @ 0x1407A1468 (SdbpCheckForMatch.c)
 *     AslFileMappingDelete @ 0x1407A1D38 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1407A1D98 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1407A3094 (SdbpCreateSearchDBContext.c)
 *     SdbpMatchOem @ 0x14085F35C (SdbpMatchOem.c)
 *     SdbpMatchCpu @ 0x14085F3B0 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14085F404 (SdbpMatchBios.c)
 *     SdbpMatchAcpi @ 0x14085F458 (SdbpMatchAcpi.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140A4F5AC (SdbpIsEntryIdAvailableInOtherDb.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int SearchDBContext; // ebx
  PVOID v13; // rsi
  int v14; // eax
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v19[40]; // [rsp+40h] [rbp-69h] BYREF
  int v20; // [rsp+F0h] [rbp+47h] BYREF
  int v21; // [rsp+108h] [rbp+5Fh] BYREF

  memset(v19, 0, 0x68uLL);
  v20 = 0;
  SearchDBContext = 0;
  v21 = 0;
  v13 = 0LL;
  P = 0LL;
  if ( !a4 || (v14 = AslFileMappingCreate((unsigned int)&P, a4, a5, a6, a7), v13 = P, v14 >= 0) )
  {
    v19[0] = 26;
    SearchDBContext = SdbpCreateSearchDBContext(v19, v13);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, a2, a3, (__int64)v19, &v21, (__int64)&v20);
      if ( SearchDBContext )
      {
        v16 = a8;
        if ( a8 )
        {
          SearchDBContext = SdbpMatchAcpi(a2, a3, *a8);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(a2, a3, v16[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(a2, a3, v16[2]);
              if ( SearchDBContext )
              {
                SearchDBContext = SdbpMatchCpu(a2, a3, v16[3]);
                if ( SearchDBContext )
                {
                  v17 = *(_QWORD *)(a1 + 16);
                  if ( v17 )
                  {
                    if ( v17 != a2 && (unsigned int)SdbpIsEntryIdAvailableInOtherDb(a2, v17, a3) )
                      SearchDBContext = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v19);
  AslFileMappingDelete(v13);
  return SearchDBContext;
}
