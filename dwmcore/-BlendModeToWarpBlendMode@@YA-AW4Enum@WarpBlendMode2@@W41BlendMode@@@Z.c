__int64 __fastcall BlendModeToWarpBlendMode(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( a1 > 17 )
  {
    v3 = a1 - 19;
    if ( v3 && (v4 = v3 - 1) != 0 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
            return 0LL;
          return 10LL;
        }
        else
        {
          return 9LL;
        }
      }
      else
      {
        return 8LL;
      }
    }
    else
    {
      return 2LL;
    }
  }
  else
  {
    if ( a1 != 17 )
    {
      if ( !a1 )
        return 1LL;
      v1 = a1 - 4;
      if ( !v1 )
        return 1LL;
      if ( v1 != 11 )
        return 0LL;
    }
    return 4LL;
  }
}
