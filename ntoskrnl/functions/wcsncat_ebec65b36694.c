wchar_t *__cdecl wcsncat(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r10
  wchar_t v4; // ax
  wchar_t *v5; // r9
  wchar_t v6; // ax

  v3 = Dest;
  do
  {
    v4 = *Dest;
    v5 = Dest++;
  }
  while ( v4 );
  while ( Count )
  {
    v6 = *Source;
    --Count;
    *v5++ = *Source++;
    if ( !v6 )
      return v3;
  }
  *v5 = 0;
  return v3;
}
