bool __fastcall SiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  wchar_t v5; // ax
  int v7; // edx

  if ( wcsicmp(a2, L"Directory") && wcsicmp(a2, L"SymbolicLink") )
    return 0;
  if ( wcsnicmp(Str1, L"Harddisk", 8uLL) )
    return 0;
  v4 = Str1 + 8;
  v5 = Str1[8];
  if ( !v5 )
    return 0;
  if ( v5 != 48 )
  {
    v7 = 0;
    while ( (unsigned __int16)(v5 - 48) <= 9u )
    {
      if ( (unsigned int)++v7 > 0xA )
        break;
      v5 = *++v4;
      if ( !*v4 )
        return 1;
    }
    return 0;
  }
  return !Str1[9];
}
