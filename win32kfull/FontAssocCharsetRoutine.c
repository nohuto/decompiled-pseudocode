__int64 __fastcall FontAssocCharsetRoutine(wchar_t *Str1, __int64 a2, const wchar_t *a3)
{
  char v5; // di
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx

  if ( _wcsicmp(a3, L"YES") )
  {
    v5 = 0;
    if ( _wcsicmp(a3, L"CODEPAGECOMPAT") )
      return 0LL;
  }
  else
  {
    v5 = 1;
  }
  if ( _wcsicmp(Str1, L"ANSI(00)") )
  {
    if ( _wcsicmp(Str1, L"SYMBOL(02)") )
      v7 = _wcsicmp(Str1, L"OEM(FF)") == 0;
    else
      v7 = 4;
  }
  else
  {
    v7 = 2;
  }
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
  if ( v5 )
    *(_DWORD *)(v8 + 18736) |= v7;
  else
    *(_DWORD *)(v8 + 18740) &= ~v7;
  return 0LL;
}
