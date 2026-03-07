wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
{
  wchar_t i; // ax
  const wchar_t *v5; // r10
  wchar_t v6; // r8
  wchar_t *result; // rax
  const wchar_t *v8; // rbx
  wchar_t v9; // r8
  wchar_t v10; // r10
  wchar_t *v11; // r10

  if ( !Context || !Delim )
    goto LABEL_25;
  if ( !Str )
  {
    if ( *Context )
    {
      Str = *Context;
      goto LABEL_6;
    }
LABEL_25:
    xHalTimerWatchdogStop();
    return 0LL;
  }
LABEL_6:
  for ( i = *Str; *Str; i = *Str )
  {
    v5 = Delim;
    if ( !*Delim )
      break;
    v6 = *Delim;
    while ( v6 != i )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_13;
    }
    ++Str;
  }
LABEL_13:
  result = Str;
  if ( *Str )
  {
    while ( 1 )
    {
      v8 = Delim;
      v9 = *Delim;
      if ( *Delim )
      {
        v10 = *Delim;
        do
        {
          v9 = v10;
          if ( v10 == *Str )
            break;
          v9 = *++v8;
          v10 = *v8;
        }
        while ( *v8 );
      }
      v11 = Str + 1;
      if ( v9 )
        break;
      ++Str;
      if ( !*v11 )
        goto LABEL_22;
    }
    *Str++ = 0;
  }
LABEL_22:
  *Context = Str;
  if ( result == Str )
    return 0LL;
  return result;
}
