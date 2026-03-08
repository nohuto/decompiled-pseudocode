/*
 * XREFs of DownLevelGetParentLanguageName @ 0x140612240
 * Callers:
 *     LdrpGetParentLangId @ 0x1403C1878 (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1402BEED8 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x1403D4280 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // r11
  char *v5; // r8
  int v6; // r11d

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_140001CC0, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)(&off_140002A60)[2 * dword_140002A6C[4 * word_14001FD40[(v3 - (_BYTE *)&off_140001CC0) >> 3]]];
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v4 + 1) >= 0 )
    return (unsigned int)(v6 + 1);
  else
    return 0LL;
}
