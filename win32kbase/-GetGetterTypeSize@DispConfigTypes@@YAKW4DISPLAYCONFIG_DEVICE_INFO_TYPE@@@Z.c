__int64 __fastcall DispConfigTypes::GetGetterTypeSize(int a1)
{
  __int64 result; // rax
  bool v2; // zf
  unsigned int v3; // edx
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 > -8 )
  {
    if ( a1 > 100 )
      return 0LL;
    if ( a1 == 100 )
      return 24LL;
    if ( a1 > 3 )
    {
      v5 = a1 - 4;
      if ( !v5 )
        return 276LL;
      v6 = v5 - 2;
      if ( !v6 )
        return 24LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 24LL;
      v8 = v7 - 2;
      if ( !v8 )
        return 32LL;
      v9 = v8 - 2;
      if ( !v9 )
        return 24LL;
      v4 = v9 == 1;
      goto LABEL_18;
    }
    if ( a1 == 3 )
      return 80LL;
    if ( a1 == -7 )
      return 940LL;
    if ( a1 != -5 )
    {
      if ( a1 != -3 )
      {
        if ( a1 != -2 )
        {
          if ( a1 == 1 )
            return 84LL;
          result = 0LL;
          v3 = 420;
          v2 = a1 == 2;
          goto LABEL_33;
        }
        return 2056LL;
      }
      return 32LL;
    }
    return 28LL;
  }
  if ( a1 == -8 )
    return 1304LL;
  if ( a1 > -15 )
  {
    switch ( a1 )
    {
      case -14:
        return 40LL;
      case -13:
        return 36LL;
      case -12:
        return 24LL;
      case -11:
        return 2056LL;
    }
    if ( a1 != -10 )
    {
      v4 = a1 == -9;
LABEL_18:
      if ( !v4 )
        return 0LL;
      return 24LL;
    }
    return 28LL;
  }
  switch ( a1 )
  {
    case -15:
      return 32LL;
    case -31:
    case -26:
      return 24LL;
    case -25:
      return 40LL;
    case -24:
      return 32LL;
    case -22:
      return 28LL;
    case -21:
      return 2056LL;
  }
  result = 0LL;
  v2 = a1 == -20;
  v3 = 56;
LABEL_33:
  if ( v2 )
    return v3;
  return result;
}
