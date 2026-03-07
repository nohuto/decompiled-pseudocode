__int64 __fastcall HasAlphaChannel(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 65 )
  {
    if ( a1 != 65 )
    {
      if ( !a1 )
        return 0LL;
      v4 = a1 - 2;
      if ( v4 )
      {
        v5 = v4 - 8;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 13;
            if ( v7 )
            {
              if ( v7 != 4 )
                return 0LL;
            }
          }
        }
      }
    }
    return 1LL;
  }
  v1 = a1 - 87;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( v3 == 3 )
      return 1LL;
  }
  return 0LL;
}
