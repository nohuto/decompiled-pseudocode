__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rbp

  v5 = *(_QWORD *)(SGDGetSessionState(Str1) + 32);
  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = 664LL * v6;
        if ( !_wcsicmp(Str1, (const wchar_t *)(v7 + v5 + 14096)) )
          break;
        if ( ++v6 >= 7 )
          return 0LL;
      }
      if ( *(_WORD *)a3 && (int)StringCchCopyW((char *)(v7 + v5 + 14146), 33LL, a3) >= 0 )
        *(_DWORD *)(v5 + v7 + 14088) = 1;
    }
    else
    {
      cCapString((WCHAR *)(v5 + 19268), (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory((unsigned __int16 *)(v5 + 18748), (const unsigned __int16 *)a3);
  }
  return 0LL;
}
