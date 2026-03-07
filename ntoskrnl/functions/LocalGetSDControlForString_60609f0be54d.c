__int64 __fastcall LocalGetSDControlForString(wchar_t *Str1, int a2, _WORD *a3, wchar_t **a4)
{
  wchar_t *v7; // rbx
  unsigned int v8; // esi
  char *v9; // rdi

  v7 = Str1;
  if ( !Str1 || !a3 || !a4 )
    return 87LL;
  *a3 = 0;
  do
  {
    if ( *v7 != 32 )
      break;
    ++v7;
  }
  while ( v7 );
LABEL_6:
  v8 = 0;
  v9 = byte_1400082F8;
  do
  {
    if ( (a2 & *((_DWORD *)v9 + 2)) == a2 && !wcsnicmp(v7, *((const wchar_t **)v9 - 1), *(unsigned int *)v9) )
    {
      *a3 |= *((_WORD *)&ControlLookup + 12 * v8 + 6);
      for ( v7 += *((unsigned int *)&ControlLookup + 6 * v8 + 2); v7; ++v7 )
      {
        if ( *v7 != 32 )
          break;
      }
      goto LABEL_6;
    }
    ++v8;
    v9 += 24;
  }
  while ( v8 < 6 );
  *a4 = v7;
  return 0LL;
}
