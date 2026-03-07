__int64 **__fastcall CmpSearchSectionByName(__int64 ***a1, const char *a2)
{
  __int64 **i; // rbx
  __int64 **v5; // rsi
  const char *v7; // rcx

  i = 0LL;
  if ( a1 && a2 )
  {
    v5 = a1[1];
    i = v5;
    if ( v5 )
    {
      while ( stricmp((const char *)i[1], a2) )
      {
        i = (__int64 **)*i;
        if ( !i )
          goto LABEL_8;
      }
LABEL_5:
      a1[1] = i;
    }
    else
    {
LABEL_8:
      for ( i = *a1; i; i = (__int64 **)*i )
      {
        if ( i == v5 )
          return 0LL;
        v7 = (const char *)i[1];
        if ( v7 && !stricmp(v7, a2) )
          goto LABEL_5;
      }
      if ( v5 )
        return i;
      return 0LL;
    }
  }
  return i;
}
