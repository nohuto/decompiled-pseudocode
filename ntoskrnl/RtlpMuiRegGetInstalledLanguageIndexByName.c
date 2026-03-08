/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x140A71F24
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x14039C3E0 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140843BA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x140844498 (RtlpMuiRegGetOrAddString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4)
{
  char v5; // bl
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int16 v10; // r9
  __int16 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  v5 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (int)RtlpMuiRegGetOrAddString(a1, a2, 0LL, &v12) < 0 )
    return 3221225524LL;
  v7 = 0;
  if ( !*(_WORD *)(v6 + 6) )
    return 3221225524LL;
  v8 = *(_QWORD *)(v6 + 16);
  do
  {
    v9 = 28LL * v7;
    if ( *(_WORD *)(v9 + v8 + 6) == v12 )
    {
      v10 = *(_WORD *)(v9 + v8);
      if ( (v10 & 0x1020) == 0x20 )
      {
        if ( a4 )
        {
          *a4 = v7;
          return 0LL;
        }
      }
      else if ( (v10 & 0x1000) != 0 )
      {
        v5 = 1;
      }
    }
    ++v7;
  }
  while ( v7 < *(unsigned __int16 *)(v6 + 6) );
  return v5 != 0 ? -1073741637 : -1073741772;
}
