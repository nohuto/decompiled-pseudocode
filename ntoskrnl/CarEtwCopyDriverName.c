__int64 __fastcall CarEtwCopyDriverName(_WORD *a1, _WORD *a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  _WORD *v4; // rdi
  unsigned __int64 i; // rcx

  v3 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      do
      {
        --a3;
        *a1++ = *a2;
        if ( !*a2 )
          break;
        ++a2;
      }
      while ( a3 > 1 );
      if ( a3 )
      {
        v4 = a1;
        for ( i = a3; i; --i )
          *v4++ = 0;
      }
    }
    else
    {
      *a1 = 0;
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v3;
}
