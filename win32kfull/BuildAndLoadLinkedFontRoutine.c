/*
 * XREFs of BuildAndLoadLinkedFontRoutine @ 0x1C0118F90
 * Callers:
 *     <none>
 * Callees:
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall BuildAndLoadLinkedFontRoutine(wchar_t *Str1, __int64 a2, const void *a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  void *v7; // rdi

  v4 = (unsigned int)a4;
  if ( (unsigned int)a4 > 0x7FFFFFFE )
    return 3221225495LL;
  if ( 2 * (_DWORD)a4 == -2 )
    return 3221225495LL;
  v7 = (void *)Win32AllocPool((unsigned int)(2 * a4 + 2), 1718382187LL, a3, a4);
  if ( !v7 )
    return 3221225495LL;
  if ( _wcsicmp(Str1, L"SystemDefaultEUDCFont") )
  {
    memmove(v7, a3, (unsigned int)v4);
    *((_WORD *)v7 + (v4 >> 1)) = 0;
    bAddFlEntry(Str1, 0LL);
  }
  Win32FreePool(v7);
  return 0LL;
}
