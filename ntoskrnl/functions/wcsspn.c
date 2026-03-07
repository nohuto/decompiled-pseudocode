size_t __cdecl wcsspn(const wchar_t *Str, const wchar_t *Control)
{
  wchar_t v2; // r8
  const wchar_t *v4; // rax
  wchar_t v5; // r11
  const wchar_t *v6; // r9
  wchar_t v7; // dx

  v2 = *Str;
  v4 = Str;
  if ( *Str )
  {
    v5 = *Control;
    while ( 1 )
    {
      v6 = Control;
      if ( v5 != v2 )
        break;
LABEL_7:
      v2 = *++v4;
      if ( !*v4 )
        return v4 - Str;
    }
    v7 = v5;
    while ( v7 )
    {
      v7 = *++v6;
      if ( *v6 == v2 )
        goto LABEL_7;
    }
  }
  return v4 - Str;
}
