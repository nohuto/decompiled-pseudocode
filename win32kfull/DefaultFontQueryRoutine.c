/*
 * XREFs of DefaultFontQueryRoutine @ 0x1C03B7770
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DefaultFontQueryRoutine(unsigned __int16 *a1, int a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r11
  unsigned int *v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx

  if ( !_wcsicmp(a1, L"DEFAULT") )
  {
    *(_BYTE *)(a5 + 32) = *a3;
    return 0LL;
  }
  v8 = a5;
  v9 = *(unsigned int **)(a5 + 8);
  if ( !v9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a1[v10] );
    *(_DWORD *)(a5 + 4) += 2 * v10 + 2;
LABEL_6:
    ++*(_DWORD *)v8;
    return 0LL;
  }
  if ( a2 == 4 )
  {
    *v9 = *(_DWORD *)a3 | (((unsigned int)*(_QWORD *)(a5 + 24) << 15) - (*(_DWORD *)(a5 + 16) << 15)) & 0xFFFF0000;
    *(_QWORD *)(a5 + 8) += 4LL;
    v12 = -1LL;
    do
      ++v12;
    while ( a1[v12] );
    StringCchCopyW(*(char **)(a5 + 24), *(unsigned int *)(a5 + 4), (char *)a1);
    v13 = (unsigned int)(v12 - 1);
    if ( (unsigned __int16)(a1[v13] - 48) <= 9u )
    {
      LODWORD(v12) = v12 - 1;
      *(_WORD *)(*(_QWORD *)(v8 + 24) + 2 * v13) = 0;
    }
    *(_QWORD *)(v8 + 24) += 2LL * (unsigned int)(v12 + 1);
    goto LABEL_6;
  }
  return 3221225473LL;
}
