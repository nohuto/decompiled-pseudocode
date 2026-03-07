bool __fastcall BiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2)
{
  wchar_t *v5; // rcx
  wchar_t v6; // ax
  __int16 v7; // dx

  if ( wcsicmp(a2, L"Directory") && wcsicmp(a2, L"SymbolicLink") )
    return 0;
  if ( wcsnicmp(Str1, L"Harddisk", 8uLL) )
    return 0;
  v5 = Str1 + 8;
  v6 = Str1[8];
  if ( !v6 )
    return 0;
  if ( v6 != 48 )
  {
    v7 = 0;
    while ( (unsigned __int16)(v6 - 48) <= 9u )
    {
      if ( (unsigned __int16)++v7 > 0xAu )
        break;
      v6 = *++v5;
      if ( !*v5 )
        return 1;
    }
    return 0;
  }
  return !Str1[9];
}
