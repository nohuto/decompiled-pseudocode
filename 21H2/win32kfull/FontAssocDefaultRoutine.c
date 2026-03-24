/*
 * XREFs of FontAssocDefaultRoutine @ 0x1C0297BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0064CBC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00A09FC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     cCapString @ 0x1C00BBE54 (cCapString.c)
 */

__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14

  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = 664LL * v5;
        if ( !_wcsicmp(Str1, (const wchar_t *)((char *)&FontAssocDefaultTable + v6 + 8)) )
          break;
        if ( ++v5 >= 7 )
          return 0LL;
      }
      if ( *(_WORD *)a3 && (int)StringCchCopyW((char *)&FontAssocDefaultTable + v6 + 58, 33LL, a3) >= 0 )
        *((_DWORD *)&FontAssocDefaultTable + 166 * v5) = 1;
    }
    else
    {
      cCapString(word_1C033ABF0, (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory(&gawcSystemDBCSFontPath, (const unsigned __int16 *)a3);
  }
  return 0LL;
}
